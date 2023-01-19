#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>


#define f(x) x*x-3*x+2
#define g(x) 2*x-3
#define e  0.0001

void main()
{
	 float x0, x1, f0, f1, g0, error;
	 int step = 1, N;

	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);

	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  
		  //check the derivative is zero or no
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }

		
		  x1 = x0 - f0/g0;

		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		  x0 = x1;
		  
		  step = step+1;
		
		 
		  
		  f1 = f(x1);
		  
		  error = fabs((f1-f0)/f1);
		  
		  
		  
	 }while(error>e);
	
	 printf("\nRoot is: %.3f", x1);
	
}
