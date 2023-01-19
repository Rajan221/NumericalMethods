//secant method

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x)    x*x - 4*x - 10

#define e 0.0001


void main()
{
	 float x0, x1, x2, f0, f1, f2, error;
	 int step = 1, N;

	 printf("\nEnter initial guesses:\n");
	 scanf("%f%f", &x0, &x1);

	 printf("Enter maximum iteration:\n");
	 scanf("%d", &N);
	
	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 do
	 {
		  f0 = f(x0);
		  f1 = f(x1);
		  if(f0 == f1)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }
		  
		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);
		  
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2, f2);
		  
		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		  f1 = f2;
		  
		  step = step + 1;
		  
		  
		  error = fabs((x1-x0)/x0);
	 }while(error>e);
	
	 printf("\nRoot is: %f", x2);

}
