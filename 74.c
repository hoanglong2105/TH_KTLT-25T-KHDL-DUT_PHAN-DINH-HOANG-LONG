#include<stdio.h>
int m,n,i,j;
int A[1001][1001],sum=0,Max;
void input()
{
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
}
void solve_1()
{
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}
void solve_2()
{
	for (i=1;i<=m;i++)
	{
		Max=A[i][1];
		for (j=1;j<=n;j++)
		{
			if (A[i][j]>Max) Max=A[i][j];
		}
		sum+=Max;
		A[i][i]=Max;
	}
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf ("%d",sum);
}
int main()
{
	input();
	solve_1();
	solve_2();
	return 0;
}
