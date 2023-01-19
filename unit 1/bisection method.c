#include<stdio.h>
#include<math.h>

#define error 0.0001

#define f(x) x*x*x-4*x-9

int count=0;



float bisection(float a, float b){

	float userError;
	userError=fabs((b-a)/b);
	if(userError <= error){
		return a;
	}
	else{
		float result, f0;
		float mid = (a+b)/2;
		result=f(mid);
		
		printf("\n x%d =(%f + %f)/2 = %f\n",count, a ,b, mid);
		printf("\nf(x%d)= %f\n",count, result);
		
		f0=f(a);
		
				
		if(f0*result<0){
			b = mid;
					
		}
		else{
			a= mid;		
		}		
		
			count++;
		return bisection(a, b);
	
	}
}


void main(){
	int x, equation; 
	float Fa, Fb, root,a , b;
	printf("Given equation: x^3 - 4x - 9:\n");
	printf("Enter the lower limit: ");
	scanf("%f", &a);
	printf("Enter the upper limit: ");
	scanf("%f", &b);

	Fa= f(a);
	Fb= f(b);
	
	printf("\n");
	printf("f(a)= %f\n", Fa);
	printf("f(b)= %f\n", Fb);
	
	if(Fa*Fb<0){
		printf("\nRoot lies between the interval\n");
	
		root= bisection(a , b);
		printf("The root is %.3f\n\n ****completed in %d steps****\n", root, count);
	}
	else{
		printf("Root doesnt lies between given guess\n");
	}
	
}
