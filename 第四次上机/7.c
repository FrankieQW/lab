#include<stdio.h>
int ch_check(char ch)
{
	if (ch <= 'z' && ch >= 'a')
	{
		printf("����һ����ĸ��\n");
		return ch - 'a' + 1;
	}
	else if(ch<='Z'&&ch>='A')
	{
		printf("����һ����ĸ��\n");
		return ch - 'A' + 1;
	}
	else
	{
		printf("�ⲻ��һ����ĸ��\n");
		return 0;
	}
}
int main(void)
{
	int k;
	char ch;
	printf("�������ַ���\n");
	while (scanf_s("%c",&ch) == 1)
	{
		if (ch != '0')
		{
			char ch0;
			k = ch_check(ch);
			printf("����ĸ����ĸ���е�λ��Ϊ%d\n", k);
			printf("����������ַ���\n");
			scanf_s("%c", &ch0);
		}
		else
		{
			printf("Done!");
			break;
		}
	}
	return 0;
}