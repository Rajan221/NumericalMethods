//Newton's Interpolation using Backward Difference Formula
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 15


int main(){
    float x[MAX],fx[MAX],bd[MAX],xp,s,h,v,p;
    int n,i,j,k;
	printf("Newtons backward :\n");
    printf("Input the number of data points: ");
	scanf("%d", &n);
	printf("Input data pairs x(i) and values f(i): \nx f(x)\n");
	for(i=0;i<n;i++){
		scanf("%f %f",&x[i], &fx[i])	;
	}
    h=x[2]-x[1];

         printf("Input x at which interpolation is required: ");
		scanf("%f", &xp);
        s=(xp-x[n-1])/h;
        p=1;
        v=fx[n];
        for(i=1;i<=n; i++){
            bd[i]=fx[i];
        }
        for(i=n,k=1; i>=1,k<n; i--,k++){
            for(j=n;j>=n-i;j--){
                bd[j]=bd[j]-bd[j-1];
            }
            p=p*(s+k-1)/k;
            v=v+p*bd[n];
        }
        printf("Interpolated function value at x= %f  is %f", xp, v);
		getch();
    return 0;
}
