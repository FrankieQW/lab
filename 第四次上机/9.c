#include<stdio.h>
int prime(int n)
{
	int k=0;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i != 0)
		{
			k++;
			continue;
		}
		else
			break;
	}
	return k;
}
int check7(int n)
{
	if (n % 10 == 7)
		return 1;
	else if (n / 10 - n / 100 * 10 == 7)
		return 1;
	else if (n / 100 == 7)
		return 1;
	else
		return 0;

}
int main(void)
{
	int n;
	for (n = 1; n <= 200; n++)
	{
		if (n > 0 && n <= 200 && prime(n) > 0 && check7(n) == 1)
			printf("%d\n", n);
		else
			continue;
	}
	return 0;
}