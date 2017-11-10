/*
 * <#src:b#>
 */

#include <stdio.h>

void x2id(double x, int *i, double *d)
{
    *i = x;
    *d = x - *i;
}

int main(void)
{
    double x;
    int i;
    double d;

    printf("x=? ");
    scanf("%lf", &x);

    x2id(x, &i, &d);

    printf("整数部分=%d, 小数部分=%f\n", i, d);

}
