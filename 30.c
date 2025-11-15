#include<stdio.h>
#include<math.h>
int giai_phuong_trinh_bac_hai(double a, double b, double c, double *nghiem1, double *nghiem2);
int main()
{
	double a,b,c, nghiem1, nghiem2;
	scanf("%lf %lf %lf",&a,&b,&c);
	int so_nghiem=giai_phuong_trinh_bac_hai(a,b,c,&nghiem1,&nghiem2);
	switch(so_nghiem)
	{
		case -1:
			printf("Phuong trinh co vo so nghiem");
			break;
		case 0:
			printf("Phuong trinh vo nghiem");
			break;
		case 1:
			printf("Phuong trinh co nghiem duy nhat x = %lf",nghiem1);
			break;
		case 2:
			printf("Phuong trinh co 2 nghiem phan biet x1 = %.2lf x2 = %.2lf",nghiem1,nghiem2);
			break;		
	}	
	return 0;
}
int giai_phuong_trinh_bac_hai(double a, double b, double c, double *nghiem1, double *nghiem2)
{
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				return -1;
			}
			else return 0;
		}
		else
		{
			*nghiem1 = -c/b;
			return 1;
		} 
	}
	else
	{
		double delta = b*b - 4*a*c;
		if (delta<0)
		{
			return 0;
		}
		else if (delta==0)
		{
			*nghiem1=-b/(2*a);
			return 1;
		}
		else
		{
			*nghiem1=(-b + sqrt(delta)) / (2*a);
			*nghiem2=(-b - sqrt(delta)) / (2*a);
			return 2;
		}
	}
}
