#include <stdio.h>
#include <math.h>

int giaiPhuongTrinhBacHai(double a, double b, double c, double *x1, double *x2) {
    double delta;

    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                return 0; 
            } else {
                return 1; 
            }
        } else {
            #include <stdio.h> 
#include <math.h> 

double a,b,c,delta;

void input()
{
	scanf("%lf%lf%lf",&a,&b,&c);
}
void solve()
{
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
			{
				printf("Phuong trinh co vo so nghiem");
			}
			else
			{
				printf("Phuong trinh vo nghiem");
			}
		}
		else
		{
			printf("Phuong trinh co nghiem x=%lf",-c/b);
		}
	}
	else
	{
		delta=b*b-4*a*c;
		if (delta>=0)
		{
			if (delta==0)
			{
				printf ("Phuong trinh co nghiem x=%lf",-b/(2*a));
			}
			else
			{
				printf ("Phuong trinh co 2 nghiem phan biet x1=%lf x2=%lf",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
			}
		}
		else
		{
			printf ("Phuong trinh vo nghiem");
		}
	}
}
int main() 
{
	input();
	solve();
	return 0;
} 
            *x1 = -c / b;
            return 4; 
        }
    }

   
    delta = b * b - 4 * a * c;

    if (delta < 0) {
        return 1; 
    } else if (delta == 0) {
       
        *x1 = *x2 = -b / (2 * a);
        return 2; 
    } else {
        
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 3; 
    }
}

int main() {
    double a, b, c;
    double nghiem1, nghiem2; 

    
    
    scanf("%lf%lf%lf", &a,&b,&c);
    

    return 0;
}
