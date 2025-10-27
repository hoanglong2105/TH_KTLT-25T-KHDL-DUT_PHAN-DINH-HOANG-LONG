#include<stdio.h>
long long n;
double A[1000001];
void input()
{
	scanf("%lld",&n);
	int i;
	for (i=1;i<=n;i++)
	{
		scanf("%lf",&A[i]);
	}
}
void solve_1()
{
	int i;
	for (i=1;i<=n;i++)
	{
		printf("%lf ",A[i]);
	}
	printf("\n");
}
void solve_2()
{
	int i;
	for (i=1;i<=n;i++)
	{
		if (A[i]>=0) printf("%lf ",A[i]);
	}
}
int main()
{
	input();
	solve_1();
	solve_2();
	return 0;
}
