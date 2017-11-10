/*
 * <#src:b#>
 */

#include <stdio.h>

// 配列 a の要素を、別の配列 b にコピーする手続き
void copyArray(int a[], int an, int b[])
{
    int i;
    for (i = 0; i < an; i = i + 1) {
	b[i] = a[i];
    }
}

void printIntArray(int a[], int an)
{
    int i;
    for (i = 0; i < an; i = i+1) {
	printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void)
{
    int a[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int b[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    printf("配列 a (元): ");
    printIntArray(a, 10);
    printf("配列 b (前): ");
    printIntArray(b, 10);

    copyArray(a, 10, b);

    printf("配列 b (後): ");
    printIntArray(b, 10);

    return 0;
}
