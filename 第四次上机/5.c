#include<stdio.h>
#include<math.h>
void up0(double a, double b, double c)
{
	printf("x1=%lf,x2=%lf",(-b-sqrt(b*b-4*a*c))/2/a, (-b + sqrt(b * b - 4 * a * c)) / 2 / a);
}
void down0(double a, double b, double c)
{
	printf("无实数解。");
}
void equal0(double a, double b, double c)
{
	printf("x1=x2=%lf", -b / 2 / a);
}
int main(void)
{
	double a, b, c,detal;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	detal = b * b - 4 * a * c;
	if (detal > 1e-15)
		up0(a, b, c);
	else if (detal < 1e-15)
		down0(a, b, c);
	else
		equal0(a, b, c);
	return 0;
}