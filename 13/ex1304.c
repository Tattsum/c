/*
 * ex1304.c
 */

#include <stdio.h>

void swap_double(double *x, double *y)
{

// ここを補完しなさい
    double tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    double a = 12.3, b = 45.6;

    printf("a= %f\n", a);
    printf("b= %f\n", b);

    swap_double(&a, &b);

    printf("a= %f\n", a);
    printf("b= %f\n", b);

    return 0;
}
