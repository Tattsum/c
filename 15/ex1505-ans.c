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

/* 要素数sizeの実数配列aに順に入力する */
void readDoubleArray(double a[], int size)
{
    int i;

    for (i = 0; i < size; i = i+1) {
	printf("%d 番目? ", i+1);
	scanf("%lf", &a[i]);
    }
}

/* 要素数sizeの実数配列aを順に出力する */
void printDoubleArray(double a[], int size)
{
    int i;

    for (i = 0; i < size; i = i + 1) {
	printf("%f ", a[i]);
    }
    printf("\n");
}

/* 要素数sizeの実数配列aを逆順にする */
void reverseDoubleArray(double a[], int size)
{
    int i;
    
    for (i = 0; i < size/2; i = i+1) {
        /* a[i] と a[size-1-i]を交換 */
	swap_double(&a[i], &a[size-1-i]);
    }
}

int main(void)
{
    double data[100]; 
    int num;

    printf("データ数? ");
    scanf("%d", &num);

    readDoubleArray(data, num);
    reverseDoubleArray(data, num);
    printDoubleArray(data, num);
    
    return 0;
}
