
#include<stdio.h>
#include<conio.h>
#include<math.h>


#define   f(x)   cos(x)-3*x+1

#define   g(x)   (1+cos(x))/3

#define e 0.00001

void main()
{
	 int step=1, N;
	 float x0, x1, error;
	
	 /* Inputs */
	 printf("Enter initial guess: ");
	 scanf("%f", &x0);


	 /* Implementing Fixed Point Iteration */
	 printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  x1 = g(x0);
		  printf("%d\t%f\t%f\t%f\t%f\n",step, x0, f(x0), x1, f(x1));
		
		  step = step + 1;
		
		  error = fabs((x1-x0)/x1);
		  x0 = x1;
		  
		  
		  
	 }while( error > e);
	 
	 printf("\nRoot is %f", x1);
	
	 getch();
	
}
