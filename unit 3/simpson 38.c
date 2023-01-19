#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Define function here */
#define f(x) exp(x)



int main()
{
 float lower, upper, integration=0.0, stepSize, k, x1, x2;
 int h;

 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 

 /* Calculation */
 /* Finding step size */
 k = (upper - lower)/3;
 x1= lower+h;
 x2=lower+2*h;
 /* Finding Integration Value */
 integration = (f(lower) + f(upper) +3*f(x1)+3*f(x2));

 integration = (integration*k*3)/8;
 printf("\nRequired value of integration is: %f", integration);
 getch();
 return 0;
}
