//Newton's Interpolation using Forward Difference Formula
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 15


int main(){
    float x[MAX],fx[MAX],fd[MAX],xp,s,h,v,p;
    int n,i,j;
    printf("Newtons Forward :\n");
    printf("Input the number of data points: ");
    scanf("%d", &n);
    printf("Input data pairs x(i) and values f(i): \nx f(x)\n");
	for(i=0;i<n;i++){
		scanf("%f %f",&x[i], &fx[i])	;
	}
    h=x[2]-x[1];
 
        printf("Input x at which interpolation is required: ");
		scanf("%f", &xp);
        s=(xp-x[1])/h;
        p=1;
        v=fx[1];
        for(i=1;i<=n; i++){
            fd[i]=fx[i];
        }
        for(i=1;i<=n-1; i++){
            for(j=1;j<=n-i;j++){
                fd[j]=fd[j+1]-fd[j];
            }
            p=p*(s-i+1)/i;
            v=v+p*fd[1];
        }
        printf("Interpolated function value at x= %f  is %f", xp, v);
		getch();
    return 0;
}
