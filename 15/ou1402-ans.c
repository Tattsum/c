/*
 * <#src:b#>
 */

#include <stdio.h>

// 配列 a と b の要素を、配列 c に、a, b の順でコピーする手続き
// 配列 a の大きさを an, 配列 b の大きさを bn とする
void concatArray(int a[], int an, int b[], int bn, int c[])
{
    int i, j;

    for (i = 0; i < an; i = i+1) {
	c[i] = a[i];
    }
    j = i;
    for (i = 0; i < bn; i = i+1) {
	c[j] = b[i];
	j = j+1;
    }
}

void printIntArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i = i+1) {
	printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int c[10];
	
    printf("配列 a: ");
    printIntArray(a, 5);
    printf("配列 b: ");
    printIntArray(b, 5);
	
    concatArray(a, 5, b, 5, c);
	
    printf("配列 c: ");
    printIntArray(c, 10);

    return 0;
}
