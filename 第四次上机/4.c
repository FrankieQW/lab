#include<stdio.h>
#include<math.h>
double f(double x) 
{
	return x * x + exp(x)*sin(x);
}
double calculas(double a, double b, int n)
{
	int i;
	double sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += f(a + (i - 1) * (b - a) / n + (b - a) / 2 / n)*(b-a)/n;
	}
	return sum;
}
int main(void)
{
	int i;
	int n;
	double a, b;
	scanf_s("%lf%lf%d", &a, &b, &n);
	printf("\n%lf", calculas(a, b, n));
	return 0;
}