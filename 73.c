#include<stdio.h>
#include<math.h>
void nhap_ma_tran(double A[101][101], int n);
void xuat_ma_tran(double A[101][101], int n);
void nghichdao(double A[101][101], int n);
int main()
{
	printf ("Nhap ma tran A cap nxn: \n");
	int n;
	scanf("%d",&n);
	double A[101][101];
	nhap_ma_tran(A,n);
	printf ("Ma tran A la: \n");
	xuat_ma_tran(A,n);
	nghichdao(A,n);
	return 0;
}
void nhap_ma_tran(double A[101][101], int n)
{
	int i,j;
	for (i=0;i<=n-1;++i)
	{
		for (j=0; j<=n-1; ++j)
		{
			scanf("%lf",&A[i][j]);
		}
	}
}
void xuat_ma_tran(double A[101][101], int n)
{
	int i,j;
	for (i=0;i<=n-1;++i)
	{
		for (j=0; j<=n-1; ++j)
		{
			printf("%.2lf ",A[i][j]);
		}
		printf ("\n");
	}
}
void nghichdao(double A[101][101], int n)
{
    int i, j, z;
    
    double B[101][202],A_mo_rong[101][202]; 
    
	for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            if (j < n)
			{
                A_mo_rong[i][j] = A[i][j]; 
            } 
			else 
			{
                A_mo_rong[i][j] = (j == i + n) ? 1.0 : 0.0;
            }
        }
    }
    for (i = 0; i < n; i++) 
    {
        
        int hang_doi = i;
        for (j = i + 1; j < n; j++) {
            if (fabs(A_mo_rong[j][i]) > fabs(A_mo_rong[hang_doi][i])) 
			{
                hang_doi = j;
            }
        }
        
        if (hang_doi != i) {
            for (z = 0; z < 2 * n; z++) 
			{
                double temp = A_mo_rong[i][z];
                A_mo_rong[i][z] = A_mo_rong[hang_doi][z];
                A_mo_rong[hang_doi][z] = temp;
            }
        }

        if (fabs(A_mo_rong[i][i]) < 1e-9 )
        {
            printf("Khong co ma tran nghich dao\n");
            return;
        }

        for (j = i + 1; j < n; j++)
        {
            double tmp = A_mo_rong[j][i] / A_mo_rong[i][i];
            for (z = 0; z < 2 * n; z++)
            {
                A_mo_rong[j][z] -= A_mo_rong[i][z] * tmp;
            }
        }
    }
    
    for (i = n - 1; i >= 0; i--) 
    {
        for (j = i - 1; j >= 0; j--) 
        {
            double tmp = A_mo_rong[j][i] / A_mo_rong[i][i];
            for (z = 0; z < 2 * n; z++)
            {
                A_mo_rong[j][z] -= A_mo_rong[i][z] * tmp;
            }
        }
    }

    printf("Ma tran nghich dao cua ma tran A la:\n");
    
    for (i = 0; i < n; i++)
    {
        double tmp = A_mo_rong[i][i]; 
        
        for (j = 0; j < n; j++)
        {
            B[i][j] = A_mo_rong[i][j + n] / tmp; 
            printf("%.2lf ", B[i][j]);
        }
        printf("\n");
    }
}


