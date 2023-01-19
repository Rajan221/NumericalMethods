//Polynomial interpolation using Lagrange's Method

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 15

int main(){
    int n,i,j;
    float x[MAX], f[MAX], fp, lf, sum, xp;
    printf("Lagrange Methods :\n");
    printf("Input the number of data points: ");
    scanf("%d", &n);
    printf("Input data pairs x(i) and values f(i): \nx f(x)\n");
    for(i=0;i<n;i++){
		scanf("%f %f",&x[i], &f[i])	;
	}

		printf("Input x at which interpolation is required: ");
		scanf("%f", &xp);
		sum=0.0;
		for(i=0; i<n;i++){
			lf=1.0;
			for(j=0;j<n;j++){
				if(i!=j){
					lf=lf*(xp-x[j])/(x[i]-x[j]);
				}
			}
			sum=sum+lf*f[i];
		}
		fp=sum;
		printf("Interpolated function value at x= %f is %f", xp, fp);
		
		getch();
	return 0;
}
