/*
 * <#src:b#>
 */

#include <stdio.h>

void printIntArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i = i+1) {
	printf("%d ", a[i]);
    }
    printf("\n");
}

/* 要素数sizeの整数配列aの最大値を x 倍する */
void bonus(int a[], int size, double x)
{
    int i, max;
    max = 0;
    for (i = 1; i < size; i = i+1) {
	if (a[i] > a[max]) {
	    max = i;
	}
    }
    a[max] = a[max] * x;
}

int main(void)
{
    int salaries[] = { 87, 20, 45, 38, 99, 120, 28 };
    int i, size; 

    size = 7;

    printf("激励前: ");
    printIntArray(salaries, size);
    
    bonus(salaries, size, 1.2);
    
    printf("激励後: ");
    printIntArray(salaries, size);

    return 0;
}
