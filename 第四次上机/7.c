#include<stdio.h>
int ch_check(char ch)
{
	if (ch <= 'z' && ch >= 'a')
	{
		printf("这是一个字母！\n");
		return ch - 'a' + 1;
	}
	else if(ch<='Z'&&ch>='A')
	{
		printf("这是一个字母！\n");
		return ch - 'A' + 1;
	}
	else
	{
		printf("这不是一个字母！\n");
		return 0;
	}
}
int main(void)
{
	int k;
	char ch;
	printf("请输入字符：\n");
	while (scanf_s("%c",&ch) == 1)
	{
		if (ch != '0')
		{
			char ch0;
			k = ch_check(ch);
			printf("该字母在字母表中的位置为%d\n", k);
			printf("请继续输入字符：\n");
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