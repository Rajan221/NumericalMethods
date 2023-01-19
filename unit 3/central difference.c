#include <stdio.h>
#include<math.h>
#define f(x) pow(x, 2)

void main(){
	float x, h, dx,xha, xhb, ax, axh, bxh;
	
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("Enter the value of h: ");
	scanf("%f", &h);
	
	xha=x-h;
	xhb=x+h;
	bxh=f(xhb);
	axh = f(xha);
	
	dx= (bxh-axh)/(2*h);
	
	printf("The derivative is: %f", dx);
	
}
