#include<stdio.h>
#include<conio.h>
float fun(float x, float y)
{
	return 2*x+y;
}


void main()
{
	float x0,y0,x,h,y;
	int i,n;
	printf("Enter the initial condition for x and y:");
	scanf("%f%f",&x0,&y0);
	printf("Enter the value for x at which y is required:");
	scanf("%f",&x);
	printf("Enter the step size:");
	scanf("%f",&h);
	printf("Iterations\tx\t\ty");
	n=(x-x0)/h;
	for (i=1;i<=n;i++)
	{
		y=y0+h*fun(x0,y0);
		x0=x0+h;
		y0=y;
		printf("\n%d\t\t%.1f\t\t%.4f",i,x0,y0);
	}
}
