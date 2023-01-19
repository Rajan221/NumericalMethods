#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 10

void main()
{
	float a[SIZE][SIZE],x[SIZE],b[SIZE],ratio,sum,pivot;
	int i,j,k,n;
	printf("Enter the number of unknowns:");
	scanf("%d",&n);
	printf("Enter the matrix rowwise:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the RHS matrix(constants):");
	for(i=1;i<=n;i++)
	{
		scanf("%f",&b[i]);
	}
	
	for(i=1;i<=n-1;i++)
	{
		pivot=a[i][i];
		if(pivot<0.000001)
		{
			printf("\nMathematical error");
		}
		for(j=i+1;j<=n;j++)
		{
			ratio=a[j][i]/pivot;
			for(k=1;k<=n+1;k++)
			{
				a[j][k]=a[j][k]-ratio*a[i][k];	
			}
		b[j]=b[j]-ratio*b[i];	
		}	
	}
	x[n]=b[n]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		sum=0.0;
		for(j=i+1;j<=n;j++)
		{
			sum=sum+a[i][j]*x[j];
			x[i]=(b[i]-sum)/a[i][i];
		}
		
	}
	for(i=1;i<=n;i++)
	{
		printf("\nx[%d]=%.3f",i,x[i]);	
	}
	
}
