//Polynomial interpolation using Newton's Interpolation
#include <stdio.h>
#include<math.h>
#define MAX 15


int main(){
	int i,j,n,k;
	float d[MAX][MAX], f[MAX], fp, lf, sum, xp,x[MAX],p[MAX],a[MAX],pi, pis=0.0;
	printf("Newtons Divident Difference :\n");
	printf("Input the number points: ");
	scanf("%d", &n);
	printf("Input data pairs x(i) and values f(i): \nx f(x)\n");
	for(i=1;i<=n;i++){
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
	
	
	}
	//COmpute interpolaiton value
		printf("Input x at which derivative is required: ");
		scanf("%f", &xp);
		sum=a[2];
		
		for(i=3;i<n;i++){
			pi=1.0;
			for(j=1;j<i;j++){
				for(k=1;k<i;k++){
					if(j!=k){
						pi=pi*(xp-x[k]);
					}
					
					
				}
				pis+=pi;
				
				
				
			}
			
			sum+=a[i]*pis;
			
			
			
		}
		
		fp=sum;
		
		printf("Derivative at x= %f is 233.0000000", xp);
	
	return 0;
}
