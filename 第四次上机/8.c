#include<stdio.h>
int max(int a, int b)
{
	return a >= b ? a : b;
}
void maxarry(int a[],int n)
{
	int k=max(a[0],a[1]);
	for (int i = 2; i < n; i++)
	{
		k = max(k, a[i]);
	}
	for (int j = 0; j < n; j++)
	{
		if (a[j] == k)
		{
			printf("最大值为a[%d]=%d", j, k);
		}
		else
			continue;
	}
}
int main(void)
{
	int a[10];
	for (int i = 0; i < 10; i++)
		scanf_s("%d",&a[i]);
	maxarry(a, 10);
	return 0;
}