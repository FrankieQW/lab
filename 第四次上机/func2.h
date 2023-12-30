#pragma once
#include<stdio.h>
#include<math.h>
double f(double x)
{
	return x * x + exp(x) * sin(x);
}
double calculas(double a, double b, int n)
{
	int i;
	double sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += f(a + (i - 1) * (b - a) / n + (b - a) / 2 / n) * (b - a) / n;
	}
	return sum;
}
void up0(double a, double b, double c)
{
	printf("\nx1=%lf,x2=%lf\n", (-b - sqrt(b * b - 4 * a * c)) / 2 / a, (-b + sqrt(b * b - 4 * a * c)) / 2 / a);
}
void down0(double a, double b, double c)
{
	printf("\n无实数解。\n");
}
void equal0(double a, double b, double c)
{
	printf("\nx1=x2=%lf\n", -b / 2 / a);
}