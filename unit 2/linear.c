//Fitting a linear equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 10


int main(){
    int i,n;
    float x[MAX],y[MAX];
    float sumx=0.0,sumy=0.0,sumxx=0.0,sumxy=0.0,xmean,ymean,denom,a,b;
	printf("Linear Regression \n");
    printf("Input the number pairs: ");
	scanf("%d", &n);
	printf("Input x and y values (one set on each line):  \nx y\n");
    for(i=1;i<=n;i++){
      scanf("%f %f", &x[i], &y[i]);
    }
    //Computing constants a and b
    for(i=1;i<=n; i++){
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxx=sumxx+x[i]*x[i];
        sumxy=sumxy+x[i]*y[i];
    }
    xmean=sumx/n;
    ymean=sumy/n;
    denom=n*sumxx-sumx*sumx;
    b=(n*sumxy-sumx*sumy)/denom;
    a=ymean-b*xmean;
    printf("The line that is fit to the given data is y= %f + %fx", a, b);
    getch();
	return 0;
}
