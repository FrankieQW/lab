#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"func1.h"
#include"func2.h"
//#pragma warning(disable : 4996)

#define  ESC  0x1b
#define  F1  0x3b00
#define  F2  0x3c00
#define  F3  0x3d00
#define  F4  0x3e00
#define  F5  0x3f00

unsigned short bioskey(int a);

int main(void)
{
    unsigned  int  key_value;

    while (1)
    {
        printf("Chose menu:\nF1: Question2\nF2: Question3\nF3: Question4\nF4: Question5\nESC: Exit\n");

        key_value = bioskey(0);
        if (ESC == key_value) break;

        switch (key_value)
        {
        case  F1:
        {
            printf("Question 2 - Sum of squares:\nEnter x & y:\n");
            int a, b;
            scanf_s("%d%d", &a, &b);
            printf("\n%d\n", squSum(a, b));
            break;
        }

        case  F2:
        {
            printf("Question3 - Equation:\n");
            float a, b;
            scanf_s("%f%f", &a, &b);
            printf("\n%f\n", newton(a, b));
            break;
        }

        case  F4:
        {
            printf("Question 4 - Unary quadratic equation\n");
            int i;
            int n;
            double a, b;
            scanf_s("%lf%lf%d", &a, &b, &n);
            printf("\n%lf\n", calculas(a, b, n));
            break;
        }

        case F3:
        {
            printf("Question 5 - Integral:\nEnter interval [a  b]\n");
            double a, b, c, detal;
            scanf_s("%lf%lf%lf", &a, &b, &c);
            detal = b * b - 4 * a * c;
            if (detal > 1e-15)
                up0(a, b, c);
            else if (detal < 1e-15)
                down0(a, b, c);
            else
                equal0(a, b, c);
            break;
        }
        }
    }

    return 0;

}



unsigned short bioskey(int a)
{
    unsigned short ch;

    fflush(stdin);

    while (!_kbhit());

    ch = _getch();
    if (0 == ch || 224 == ch)
    {
        ch = _getch();
        ch = ch << 8;
    }

    return ch;
}