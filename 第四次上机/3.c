#include<stdio.h>
#include<math.h>
float newton(float a, float b)
{
	int i;
	float x[100];
	x[0] = b;
	x[1] = b - (a * b * b + sin(b)) / (2 * a * b + cos(b));
	for (i=0; fabs(x[i+1] - x[i]) < 1e-6;i++)
	{
		x[i + 2] = x[i + 1] - (a * x[i + 1] * x[i + 1] + sin(x[i + 1])) / (2 * a * x[i + 1] + cos(x[i + 1]));
	}
	return x[i + 1];
}
int main(void)
{
	float a, b;
	scanf_s("%f%f", &a, &b);
	printf("%f", newton(a, b));
	return 0;
}