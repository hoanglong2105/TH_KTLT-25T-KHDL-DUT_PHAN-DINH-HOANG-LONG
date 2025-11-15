#include<stdio.h>
#include<math.h>
double solve_a(double a, int n);
double solve_b(double a, int n);
double solve_c(double a, int n);
int main()
{
	double a;
	printf("Nhap so thuc a: ");
	scanf("%lf",&a);
	
	int n;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	
	printf("Gia tri a^n = %.2lf\n",solve_a(a,n));
	
	printf("Gia tri a(a+1)...(a+n-1) = %.2lf\n",solve_b(a,n));
	
	int check=0;
	int i;
	for (i = 0; i <= n; i++) 
	{ 
    	if (a + i == 0.0) 
		{ 
        	check = 1;
        	break;
    	}
	}
	if (check == 1)
	{
		printf("Khong the tinh gia tri 1/a + 1/(a(a+1)) + ... + 1/(a(a+1)...(a+n))");
	}
	else printf("Gia tri 1/a + 1/(a(a+1)) + ... + 1/(a(a+1)...(a+n)) = %.2lf", solve_c(a,n));
	
	return 0;
}
double solve_a(double a, int n)
{
	return pow(a,(double)n);
}
double solve_b(double a, int n)
{
	double ans_b = 1.0;
	int i;
	for (i=0;i<=n-1;i++)
	{
		ans_b*=(a+i);
	}
	return ans_b;
}
double solve_c(double a, int n)
{
	int i;
	double temp=1.0/a;
	double ans_c=1.0/a;
	for (i=1;i<=n;i++)
	{
		temp*=(1.0/(a+i));
		ans_c+=temp;
	}
	return ans_c;
}
