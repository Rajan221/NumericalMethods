#include<stdio.h>
#include<conio.h>
#include<math.h>
float der1(float x, float y)
{
	return (x-y*y);
}

float der2(float x, float y)
{
	return (1-2*y*(x-y*y));
}

float der3(float x, float y)
{
	return (-2*y*(1-2*y*(x-y*y))-(2*(x-y*y)*(x-y*y)));
}

int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n*fact(n-1);
}

void main()
{
	float x,x0,y0,df1,df2,df3,result;
	printf("Enter the initial condition for x and y:");
	scanf("%f",&x0);
	scanf("%f",&y0);
	printf("Enter the value at which the solution is to be estimated:");
	scanf("%f",&x);
	df1=der1(x0,y0)*(x-x0);
	df2=der2(x0,y0)*pow((x-x0),2);
	df3=der3(x0,y0)*pow((x-x0),3);
	result = y0+df1+(df2/fact(2))+(df3/fact(3));
	printf("The required solution is:%f",result);
	
	
}
