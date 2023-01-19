#include <stdio.h>
#include<math.h>
#define f(x) x*x

void main(){
	float x, h, dx, ax,xh, axh;
	
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("Enter the value of h: ");
	scanf("%f", &h);
	
	xh=x-h;
	ax=f(x);
	axh = f(xh);
	
	dx= (float)(ax-axh)/h;
	
	printf("The derivative is: %f", dx);
	
}
