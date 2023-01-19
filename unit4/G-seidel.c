	#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a[10][10],x[10],sum,error=0.0001,temp,key,relerror;
	int i,j,k,n,itr,maxit;
	printf("Enter the number of unknowns:");
	scanf("%d",&n);
	printf("Enter the matrix rowwise with RHS:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}

	printf("Enter max number of iterations:");
	scanf("%d",&maxit);
	
	for(i=1;i<=n;i++)
	{
		x[i]=0;
	}
	for(itr=1;itr<=maxit;itr++)
	{
		key=0;
		for(i=1;i<=n;i++)
		{
		sum=0;
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				sum=sum+a[i][j]*x[j];
			}
		}
		temp=(a[i][n+1]-sum)/a[i][i];
		relerror=fabs((x[i]-temp)/temp);
		if(relerror>key)
			key=relerror;
		x[i]=temp;
		}
	}
		if(key<error)	
		{
			for(i=1;i<=n;i++)
			{
				printf("\nx[%d]=%.3f",i,x[i]);
			}	
		}
}
	
			
	
	
