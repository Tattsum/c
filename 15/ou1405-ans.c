/*
 * <#src:b#>
 */

#include <stdio.h>

void x2id(double x, int *i, double *d)
{
    *i = x;
    *d = x - *i;
}

int myround(double x)
{
    double d;
    int i;

    x2id(x, &i, &d);
    if (d >= 0.5) {
	i = i + 1;
    }
    return i;
}
    
int main(void)
{
    double x;
    int y;

    printf("x? ");
    scanf("%lf", &x);
    
    y = myround(x);

    printf("元: %f, 四捨五入: %d\n", x, y);

    return 0;
}
