/*
 * <#src:b#>
 */

#include <stdio.h>

void swap_int(int *x, int *y)
{
    // 2つの整数型の変数の値を交換する手続きを完成させない
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void dsort(int a[], int n)
{
    // 並べ替えの手続きを完成させなさい

    int i, j, max;
    for (i = 0; i < n; i = i+1) {
	max = i;
	for (j = i+1; j < n; j = j+1) {
	    if (a[j] > a[max]) {
		max = j;
	    }
	}
	swap_int(&a[i], &a[max]);
    }
}

void readIntArray(int a[], int size)
{
    int i;

    for (i = 0; i < size; i = i + 1) {
	printf("%d: ", i);
	scanf("%d", &a[i]);
    }
}

void printIntArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i = i + 1) {
	printf("%d  ", a[i]);
    }
    printf("\n");
}

int main(void)
{
    int data[10];

    readIntArray(data, 10);

    printf("before sort\n");
    printIntArray(data, 10);

    //  dsort を呼び出しを記述しなさい
    dsort(data, 10);

    printf("after sort\n");
    printIntArray(data, 10);

    return 0;
}
