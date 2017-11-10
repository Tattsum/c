/*
 * <#src:b#>
 */

#include <stdio.h>

void swap_double(double *x, double *y)
{
    double tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void readDoubleArray(double a[], int size)
{
    int i;

    for (i = 0; i < size; i = i+1) {
	printf("%d番目? ", i+1);
	scanf("%lf", &a[i]);
    }
}

void printDoubleArray(double a[], int size)
{
    int i;

    for (i = 0; i < size; i = i + 1) {
	printf("%f ", a[i]);
    }
    printf("\n");
}

int main(void)
{
    double a[3], i;

    readDoubleArray(a, 3);
    printDoubleArray(a, 3);

    if (a[0] < a[1]) {
	swap_double(&a[0], &a[1]);
    }
    if (a[1] < a[2]) {
	swap_double(&a[1], &a[2]);
    }
    if (a[0] < a[1]) {
	swap_double(&a[0], &a[1]);
    }

    printDoubleArray(a, 3);

    return 0;
}

