/* ex1104ans.c */
#include <stdio.h>

int main(void)
{
    int a, b, idiv;
    double x, y, ddiv, ddiv2;

    printf("整数 a? "); scanf("%d", &a);
    printf("整数 b? "); scanf("%d", &b);
    printf("実数 x? "); scanf("%lf", &x);
    printf("実数 y? "); scanf("%lf", &y);

    idiv = a / b;
    ddiv = x / y;
    ddiv2 = x / b;

    printf("a/b=%d\n", idiv);
    printf("x/y=%f\n", ddiv);
    printf("x/b=%f\n", ddiv2);

    return 0;
}
