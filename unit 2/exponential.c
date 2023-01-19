//Fitting a linear equation
#include<stdio.h>

#include<math.h>
#define MAX 10


int main(){
    int i,n;
    float x[MAX],y[MAX],u[MAX];
    float sumx=0.0,sumu=0.0,sumxx=0.0,sumxu=0.0,xmean,umean,denom,a,b;

    printf("Exponentioal Regression\n");
    printf("Input the number pairs: ");
	scanf("%d", &n);
	printf("Input x and y values (one set on each line):  \nx y\n");
	for(i=0;i<n;i++){
		scanf("%f %f", &x[i], &y[i]);
	}
    for(i=0;i<n;i++){
        u[i]=log(y[i]);
    }
    //Computing constants a and b
    for(i=0;i<n; i++){
        sumx=sumx+x[i];
        sumu=sumu+u[i];
        sumxx=sumxx+x[i]*x[i];
        sumxu=sumxu+x[i]*u[i];
    }
    xmean=sumx/n;
    umean=sumu/n;
    denom=n*sumxx-sumx*sumx;
    b=(n*sumxu-sumx*sumu)/denom;
    a=exp(umean-b*xmean);
    printf("The exponential equation that is fit to the given data is y= %f e^ %fx", a, b);
    return 0;
}
