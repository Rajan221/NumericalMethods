#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 10

int main()
{
	int n,i,k,j,p,q,row;
	float pivot,temp,largest,term,sum=0,a[10][10],b[10],x[10];
	printf("Enter Dimension of Sysytem of euation\n");
	scanf("%d",&n);
	printf("Enter coefficients row-wise\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		scanf("%f",&a[i][j]);
	}
	printf("enter RHS vector\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&b[i]);
	}
	for(k=0;k<=n-2;k++)
	{
		largest=fabs(a[k][k]);
	
	for(p=k+1;p<=n-1;p++)
		if(fabs(a[p][k])>largest)
		{
			largest = fabs(a[p][k]);
			row = p;
		}
	
	for(p=0;p<n;p++)
	{
		temp = a[k][p];
		a[k][p] = a[row][p];
		a[row][p] = temp;
	}
	temp = b[k];
	b[k] =b[row];
	b[row] = b[p];
	
	pivot = a[k][k];
	for(i=k+1;i<n;i++)
	{
		term = a[i][k]/pivot;
		for(j=0;j<n;j++)
		{
			a[i][j] = a[i][j] - a[k][j] *term;
		}
		b[i] = b[i] -b[k]*term;
	}
	}
	x[n-1] =b[n-1]/a[n-1][n-1];
	for(i=n-2;i>=0;i--)
	{
		sum = 0;
		for(j=i+1;j<=n-1;j++)
		{
			sum = sum+a[i][j]*x[j];
		}
		x[i] = (b[i]-sum/a[i][i]);
	}
	printf("Solution:\n");
	for(i=0;i<n;i++)
	{
		printf("x%d=%f\t",i+1,x[i]);
	}
	getch();
	return 0;
}
