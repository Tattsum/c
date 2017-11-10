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

// 実数型配列 a を昇順に並べ替える手続き
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

// 実数型配列 a を降順に並べ替える手続き
void dsort_double(double a[], int n)
{
    // ここを補完しなさい
    int i, j, max;
    for (i = 0; i < n; i = i+1) {
	max = i;
	for (j = i+1; j < n; j = j+1) {
	    if (a[j] > a[max]) {
		max = j;
	    }
	}
	swap_double(&a[i], &a[max]);
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
    int order;
    double data[10];

    readDoubleArray(data, 10);

    printf("1: ascendant  2: descendant ?");
    scanf("%d", &order);

    // 変数 order の値に従って、sort_double または dsort_double  を
    // 呼び出す処理を記述しなさい
    if (order == 1) {
	sort_double(data, 10);
    } else if (order == 2) {
	dsort_double(data, 10);
    }

    printDoubleArray(data, 10);

    return 0;
}
