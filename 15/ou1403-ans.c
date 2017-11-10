/*
 * <#src:b#>
 */

#include <stdio.h>

// 配列 a の要素の後に配列 b の要素をコピーする手続き
// 配列 a の有効な要素の数を an, 配列 b の大きさを bn とする
void appendArray(int a[], int an, int b[], int bn)
{
    int i, j;

    for (i = 0; i < bn; i = i+1) {
	a[an+i] = b[i];
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
    int a[10] = {1, 2, 3, 4, 5, -1, -1, -1, -1, -1};
    int b[5] = {6, 7, 8, 9, 10};
	
    printf("配列 a: ");
    printIntArray(a, 5);
    printf("配列 b: ");
    printIntArray(b, 5);
	
    appendArray(a, 5, b, 5);
	
    printf("配列 a: ");
    printIntArray(a, 10);

    return 0;
}
