#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Define function here */
#define f(x) exp(x)

int main()
{
 float lower, upper, integration=0.0, h, k;
 int i, subInterval;

 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 printf("Enter number of sub intervals: ");
 scanf("%d", &subInterval);


 h = (upper - lower)/subInterval;

 
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*h;
  integration = integration + 2 * f(k);
 }
 integration = integration * h/2;
 printf("\nRequired value of integration is: %.3f", integration);

 return 0;
}
