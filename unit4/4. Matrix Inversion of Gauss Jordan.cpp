#include<stdio.h>
#include<conio.h>
#include<math.h>


main()
{
	float a[10][10],x[10],ratio;
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
			if(i==j)
			{
				a[i][j+n]=1;
			}
			else
			{
				a[i][j+n]=0;
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				ratio=a[j][i]/a[i][i];
				for(k=1;k<=2*n;k++)
				{
					a[j][k]=a[j][k]-ratio*a[i][k];
				}
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=n+1;j<=2*n;j++)
		{
			a[i][j]=a[i][j]/a[i][i];
		}
	}
	
	printf("The inverse matrix is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=n+1;j<=2*n;j++)
		{
			printf("%.3f\t",a[i][j]);
		}
		printf("\n");
	}	
	
	
}

