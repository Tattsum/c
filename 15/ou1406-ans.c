/*
 * <#src:b#>
 */

#include <stdio.h>

/* 要素数sizeの実数配列aに順に入力する */
void readDoubleArray(double a[], int size)
{
    int i;

    for (i = 0; i < size; i = i+1) {
	printf("%d番目? ", i+1);
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


/* 実数xの2乗を返す */
double square(double x)
{
    return x * x;
}

/* 要素数sizeの実数配列aの平均を *ave に，分散を *var に格納する */
void ave_var_double_array(double a[], int size, double *ave, double *var)
{
    int i;
    double sum, sum2;

    sum = 0;
    for (i = 0; i < size; i = i + 1) {
	sum = sum + a[i];
    }
    *ave = sum / size;

    sum2 = 0;
    for (i = 0; i < size; i = i + 1) {
	sum2 = sum2 + square(a[i] - *ave);
    }
    *var = sum2 / size;
  
}

int main(void)
{
    double a[100], ave, var;
    int num;

    printf("データ数? ");
    scanf("%d", &num);

    readDoubleArray(a, num);
    printDoubleArray(a, num);
  
    ave_var_double_array(a, num, &ave, &var);
    printf("平均: %f, 分散: %f\n", ave, var);

    return 0;
}

