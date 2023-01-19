#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) pow(x, 3)+2

int main()
{
	 float lower, upper, integration=0.0, h;
	 int i, subInterval;
	
	 printf("Enter lower limit of integration: ");
	 scanf("%f", &lower);
	 printf("Enter upper limit of integration: ");
	 scanf("%f", &upper);
	
	 h=upper- lower; 
	
	 integration = f(lower) + f(upper);
	
	 integration = integration * h/2;
	 printf("\nRequired value of integration is: %.3f", integration);
	 getch();
	 
}
