#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 10

void main()
{
	float a[10][10],x[10],ratio;
	int i,j,k,n;
	printf("Enter the number of unknowns:");
	scanf("%d",&n);
	printf("Enter the matrix rowwise:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				ratio=a[j][i]/a[i][i];
				for(k=1;k<=n+1;k++)
				{
					a[j][k]=a[j][k]-ratio*a[i][k];
				}
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		x[i]=a[i][n+1]/a[i][i];
		printf("x[%d]=%.3f",i,x[i]);
	}
	
}

