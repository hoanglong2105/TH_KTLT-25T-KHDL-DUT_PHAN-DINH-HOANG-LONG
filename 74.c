#include<stdio.h>
void nhap_ma_tran(double A[101][101], int m, int n);
void xuat_ma_tran(double A[101][101], int m, int n);
void solve(double A[101][101], int m, int n);
int main()
{
	double A[101][101];
	int m,n;
	scanf("%d %d",&m,&n);
	nhap_ma_tran(A,m,n);
	printf("Ma tran A: \n");
	xuat_ma_tran(A,m,n);
	solve(A,m,n);
	return 0;
}
void nhap_ma_tran(double A[101][101], int m, int n)
{
	int i,j;
	for (i=1;i<=m;++i)
	{
		for (j=1; j<=n; ++j)
		{
			scanf("%lf",&A[i][j]);
		}
	}
}
void xuat_ma_tran(double A[101][101], int m, int n)
{
	int i,j;
	for (i=1;i<=m;++i)
	{
		for (j=1; j<=n; ++j)
		{
			printf("%.2lf ",A[i][j]);
		}
		printf ("\n");
	}
}
void solve(double A[101][101], int m, int n)
{
	int i,j;
	double Max,sum=0;
	printf ("Dua cac phan tu cua tung hang cua ma tran len duong cheo chinh: \n");
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
			printf("%.2lf ",A[i][j]);
		}
		printf("\n");
	}
	printf ("Tong cac phan tu lon nhat cua tung hang: ");
	printf ("%.2lf",sum);
}
