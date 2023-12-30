#include<stdio.h>
int squSum(int a, int b)
{
	return a * a + b * b;
}
int main(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("\n%d", squSum(a, b));
	return 0;
}