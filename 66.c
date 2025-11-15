#include<stdio.h>
void nhap_mang_mot_chieu(double A[101],int n);
void xuat_mang_mot_chieu(double A[101], int n);
void xoa_cac_phan_tu_am(double A[101], int *n);
void xoa_phan_tu( double A[101], int *n, int k);
int main()
{
	double A[101];
	int n;
	scanf("%d",&n);
	nhap_mang_mot_chieu(A,n);
	printf ("Mang A: \n");
	xuat_mang_mot_chieu(A,n);
	xoa_cac_phan_tu_am(A,&n);
	printf ("Mang A sau khi da xoa cac phan tu am: \n");
	xuat_mang_mot_chieu(A,n);
}
void nhap_mang_mot_chieu(double A[101],int n)
{
	int i;
	for (i=1;i<=n;++i)
	{	
		scanf("%lf",&A[i]);
	}
}
void xuat_mang_mot_chieu(double A[101], int n)
{
	int i;
	for (i=1;i<=n;i++)
	{
		printf("%.2lf ",A[i]);
	}
	printf("\n");
}
void xoa_cac_phan_tu_am(double A[101], int *n)
{
	int i=1;
	while (i <= *n) 
	{
        if (A[i] < 0)
		{
            xoa_phan_tu(A, n, i);
        } 
		else 
		{
            i++;
        }
    }
}
void xoa_phan_tu( double A[101], int *n, int k)
{
	int i;
	if (k > *n)
	{
        return;
    }
    for (i = k; i < *n; i++) 
	{
        A[i] = A[i+1];
    }
    (*n)--;
}
