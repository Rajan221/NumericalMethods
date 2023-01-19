#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float a[10][10],u[10][10],x[10],ratio,sum;
	int i,j,k,n;
	printf("Enter the size of matrix:");
	scanf("%d",&n);
	printf("Enter the matrix rowwise:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			sum=0.0;
			if(i==j)
			{
				for(k=1;k<=i-1;k++)
				{
					sum=sum+(u[k][i]*u[k][i]);	
				}
				u[i][j]=sqrt(a[i][j]-sum);
			}
			
			if(i<j)
			{
				for(k=1;k<=i-1;k++)
				{
					sum=sum+(u[k][i]*u[k][j]);
				}
				u[i][j]=(a[i][j]-sum)/u[i][i];
			}
			
			if(i>j)
			{
				u[i][j]=0;
			}
			
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t%.3f",a[i][j]);
		}
		printf("\n");
	}
	printf("The Cholesky decomposition of above matrix is:\n");
	printf("Matrix U is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t%.3f",u[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose Matrix of U is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t%.3f",u[j][i]);
		}
		printf("\n");
	}
	
}
