#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Define function here */
#define f(x) exp(x)


int main()
{
 float lower, upper, integration=0.0, stepSize, k, fx0, fx1, fx2, x1;
 int h;

 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 

 /* Calculation */
 /* Finding step size */
 k = (upper - lower)/2;
 x1= lower+h;
 /* Finding Integration Value */
 integration = f(lower) + f(upper) +4*f(x1);

 integration = (integration*k) /3;
 printf("\nRequired value of integration is: %.3f", integration);
 getch();
 return 0;
}
