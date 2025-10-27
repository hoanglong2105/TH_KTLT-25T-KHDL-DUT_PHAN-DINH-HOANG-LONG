#include<stdio.h>
#include<math.h>
double a,n,temp,ans_3=0;
void input()
{
	scanf("%lf %lf",&a,&n);
}

void solve_1()
{
	printf("%lf \n",pow(a,n));
}

void solve_2()
{
	printf("%lf \n",tgamma(a+n) / tgamma(a));
}

void solve_3()
{
	int i;
	temp=1/a;
	ans_3=1/a;
	for (i=1;i<=n;i++)
	{
		temp*=1/(a+i);
		ans_3+=temp;
	}
	printf("%lf",ans_3);
}

int main()
{
	input();
	solve_1();
	solve_2();
	solve_3();
	return 0;
}
