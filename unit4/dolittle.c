#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float a[10][10],l[10][10],u[10][10],sum=0;
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
	
	for(i=1;i<=n;i++)
		u[1][i]=a[1][i];
	
	for(i=1;i<=n;i++)
		l[i][i]=1;
		
	for(i=2;i<=n;i++)
		l[i][1]=a[i][1]/u[1][1];
		
	for(j=2;j<=n;j++)
	{
		for(i=2;i<=j;i++)
		{
			for(k=1;k<=i-1;k++)
			{
				sum=sum+(l[i][k]*u[k][j]);
			}
			u[i][j]=a[i][j]-sum;
			sum=0;
		}
		
		for(i=j+1;i<=n;i++)
		{
   			for(k=1;k<=j-1;k++)
			{
    			sum=sum+(l[i][k]*u[k][j]);
   			}
   			l[i][j]=(a[i][j]-sum)/u[j][j];
   			sum=0;
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
	printf("The Doolittle decomposition for given above matrix:\n");
	printf("Matrix L is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t%.3f",l[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix U is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t%.3f",u[i][j]);
		}
		printf("\n");
	}
	
		
	
	
}

