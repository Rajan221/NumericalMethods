/*  C Program to Evaluate Polynomial using Horner’s method  */

#include <stdio.h>

void main()
{
     float a[100],sum=0,x, b[100];
     int n,i;

     printf("\nEnter degree of the polynomial X : ");
     scanf("%d",&n);
     printf("\nEnter coefficient's of the polynomial X \n");
     for(i=n;i>=0;i--)
     {
            printf("\nEnter Coefficient of [ X^%d ] : ",i);
            scanf("%f",&a[i]);
     }

     printf("\nEnter the value of X : ");
     scanf("%f",&x);

	b[n]= a[n];
     for(i=n;i>0;i--)
     {
     	printf("\nb[%d] =%.1f+%.1f*%.1f= ", i-1, a[i-1], b[i], x);
     	
        b[i-1]=a[i-1]+b[i]*x;
        printf("%.1f\n", b[i-1]);
     }

     sum=sum+a[0];

     printf("\nValue of the polynomial is = [ %f ]\n",b[0]);

    
}

