#include<stdio.h>
#include<conio.h>
#include<math.h>
//for dy/dx=x^2+y^2
float der1(float x)
{
	return (pow(x,3)/3);
}

float der2(float x)
{
	return ((pow(x,3)/3)+(pow(x,7)/63));
}

float der3(float x)
{
	return ((pow(x,3)/3)+(pow(x,7)/21)+(pow(x,15)/945));
}


void main()
{
	float x,y0,y1,y2,y3;
	printf("Enter the initial condition for y:");
	scanf("%f",&y0);
	printf("Enter the value at which the solution is to be estimated:");
	scanf("%f",&x);
	y1=der1(x)+y0;
	y2=der2(x)+y0;
	y3=der3(x)+y0;
	printf("\ny[1]=%f",y1);
	printf("\ny[2]=%f",y2);
	printf("\ny[3]=%f",y3);
	
	
}
