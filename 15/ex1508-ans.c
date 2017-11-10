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

/* 要素数size(>=2)の実数配列 a の最小値を *dmin に
   2番目に小さい値を *dmin2 に格納する */
void min2DoubleArray(double a[], int size, double *dmin, double *dmin2)
{
    int i;

    if (a[0] < a[1]) {
	*dmin = a[0];
	*dmin2 = a[1];
    } else {
	*dmin = a[1];
	*dmin2 = a[0];
    }

    for (i = 2; i < size; i = i + 1) {
	if (a[i] <= *dmin) {
	    *dmin2 = *dmin;
	    *dmin = a[i];
	} else if (a[i] < *dmin2) {
	    *dmin2 = a[i];
	}
    }
}

int main(void)
{
    double data[100];
    double dmin_value, dmin2_value;

    int num;

    printf("データ数? ");
    scanf("%d", &num);

    readDoubleArray(data, num);
    printDoubleArray(data, num);
    min2DoubleArray(data, num, &dmin_value, &dmin2_value);

    printf("最小値: %f, 2番目に小さい値: %f\n", dmin_value, dmin2_value);
    
    return 0;
}
