/*
 * <#src:b#>
 */

#include <stdio.h>

void swap_double(double *a, double *b)
{
    // ここを補完しなさい
    double t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort_double(double a[], int n)
{
    // ここを補完しなさい
    int i, j, min;
    for (i = 0; i < n; i = i+1) {
	min = i;
	for (j = i+1; j < n; j = j+1) {
	    if (a[j] < a[min]) {
		min = j;
	    }
	}
	swap_double(&a[i], &a[min]);
    }
}

void readDoubleArray(double a[], int size)
{
    int i;

    for (i = 0; i < size; i = i + 1) {
	printf("%d: ", i);
	scanf("%lf", &a[i]);
    }
}

void printDoubleArray(double a[], int size)
{
    int i;
    for (i = 0; i < size; i = i + 1) {
	printf("%.2f  ", a[i]);
    }
    printf("\n");
}

int main(void)
{
    double data[10];

    readDoubleArray(data, 10);

    printf("before sort\n");
    printDoubleArray(data, 10);

    //  sort_double を呼び出しなさい
    sort_double(data, 10);

    printf("after sort\n");
    printDoubleArray(data, 10);

    return 0;
}
