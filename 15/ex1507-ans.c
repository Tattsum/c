/*
 * <#src:b#>
 */

#include <stdio.h>

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

/* 要素数sizeの実数配列aの最大値を *dmax に、最小値を *dmin に格納する */
void maxMinDoubleArray(double a[], int size, double *dmax, double *dmin)
{
    int i;

    *dmax = a[0];
    *dmin = a[0];

    for (i = 1; i < size; i = i + 1) {
	if (a[i] > *dmax) {
	    *dmax = a[i];
        }
	if (a[i] < *dmin) {
	    *dmin = a[i];
	}
    }
}

int main(void)
{
    double data[100];
    double dmax_value, dmin_value;

    int num;

    printf("データ数? ");
    scanf("%d", &num);

    readDoubleArray(data, num);
    printDoubleArray(data, num);
    maxMinDoubleArray(data, num, &dmax_value, &dmin_value);

    printf("最大値: %f\n", dmax_value);
    printf("最小値: %f\n", dmin_value);
    
    return 0;
}
