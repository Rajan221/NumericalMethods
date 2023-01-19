#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define E 0.00001

float f (float x){
	return x*x-4*x-10;
}
int main(){
	float x1,x2,x0,f0,f1,f2;
	printf("\n Enter the initial guesses x1&x2: \n");
	scanf("%f%f", &x1, &x2);
	while(fabs((x2-x1)/x2)>E){
		f1=f(x1);
		f2=f(x2);
		if((f1*f2)>0)
		{
			printf("x1 & x2 does not bracket any root");
			exit(1);
		}
		else{
			x0=(x1+x2)/2;
			f0=f(x0);
			if((f1*f0)<0){
				x2=x0;
			}
			else{
				x1=x0;
				f1=f0;
			}
		}
		float root=(x1+x2)/2;
		printf("\n The root is %f",root);
		return 0;
	}
}
