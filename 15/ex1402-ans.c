/*
 * <#src:b#>
 */

#include <stdio.h>

void readIntArray(int a[], int size)
{
    int i;

    for (i = 0; i < size; i = i + 1) {
        printf("%d 番目 ? ", i+1);
        scanf("%d", &a[i]);
    }
}

void printIntArray(int a[], int size)
{
    int i;

    for (i = 0; i < size; i = i + 1) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap_int(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    int a[3];

    readIntArray(a, 3);

    printf("整列前: ");    
    printIntArray(a, 3);

    /* 配列 a を昇順に並べ替える.
       配列の隣り合う 2 つの要素が昇順でなければ
       交換する */
    if (a[0] > a[1]) {
        swap_int(&a[0], &a[1]);
    }
    if (a[1] > a[2]) {
        swap_int(&a[1], &a[2]);
    }
    if (a[0] > a[1]) {
        swap_int(&a[0], &a[1]);
    }

    printf("整列後: ");
    printIntArray(a, 3);
    
    return 0;
}

