#include<stdio.h>
int main(void)
{
	int i, j;
	int x[10] = { 0 };
	unsigned char a[128][128];
	short int row, col;
	FILE* fp;
	if (fopen_s(&fp,"D:\\image.dat","rb")!=0)
	{
		printf("Error!n");
		exit(1);
	}
	fread(&row, sizeof(short), 1, fp);
	fread(&col, sizeof(short), 1, fp);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <col; j++)
			fread(&a[i][j], sizeof(unsigned char), 1, fp);
	}
	fclose(fp);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (a[i][j] >= 0 && a[i][j] <= 24)
				x[0]++;
			else if (a[i][j] >= 25 && a[i][j] <= 49)
				x[1]++;
			else if (a[i][j] >= 50 && a[i][j] <= 74)
				x[2]++;
			else if (a[i][j] >= 75 && a[i][j] <= 99)
				x[3]++;
			else if (a[i][j] >= 100 && a[i][j] <= 124)
				x[4]++;
			else if (a[i][j] >= 125 && a[i][j] <= 149)
				x[5]++;
			else if (a[i][j] >= 150 && a[i][j] <= 174)
				x[6]++;
			else if (a[i][j] >= 175 && a[i][j] <= 199)
				x[7]++;
			else if (a[i][j] >= 200 && a[i][j] <= 224)
				x[8]++;
			else if (a[i][j] >= 225 && a[i][j] <= 255)
				x[9]++;
			else
				continue;
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (int k = 1; k <= x[i]/200; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}