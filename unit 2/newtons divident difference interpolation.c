//Polynomial interpolation using Newton's Interpolation
#include <stdio.h>
#include<math.h>
#define MAX 15


int main(){
	int i,j,n;
	float d[MAX][MAX], f[MAX], fp, lf, sum, xp,x[MAX],p[MAX],a[MAX],pi;
	printf("Newtons Divident Difference :\n");
	printf("Input the number points: ");
	scanf("%d", &n);
	printf("Input data pairs x(i) and values f(i): \nx f(x)\n");
	for(i=0;i<n;i++){
		scanf("%f %f",&x[i], &f[i])	;
	}
	//Consttruct difference table
	for(i=1;i<=n;i++){
		d[i][1] = f[i];
	}
	for(j=2;j<=n;j++){
		for(i=1;i<=n;i++){
			d[i][j] = (d[i+1][j-1]-d[i][j-1])/(x[i+j-1]-x[i]);
		}
	}
	//set the coefficeints of interpolation polynomial
	for(j=1;j<=n;j++){
		a[j]=d[1][j];
		printf("%f", a[j]);
	}
	//COmpute interpolaiton value
		printf("Input x at which interpolation is required: ");
		scanf("%f", &xp);
		sum=a[1];
		for(i=2;i<=n;i++){
			pi=1.0;
			for(j=1;j<=i-1;j++){
				pi=pi*(xp-x[j]);
			}
			sum=sum+a[i]*pi;
		}
		
		fp=sum;
		
		printf("Interpolated function value at x= %f is %f", xp, fp);
	
	return 0;
}
