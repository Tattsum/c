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

/* 実数引数 d の絶対値を計算する関数 */
double dabs(double d)
{
    if (d < 0) {
        return -d;
    } else {
        return d;
    }
}

/* ニュートン法で実数 x の平方根を返す。許容誤差は 0.000001 とする */
double root(double x)
{
    double xn, eps;
    xn = x;
    eps = 0.000001;

    while (dabs(xn * xn - x) > eps) {
        xn = xn - (xn * xn - x) / (2.0 * xn);
    }

    return xn;
}

/* 点数を格納した実数配列 tensu の各要素に対応する偏差値を実数配列 hensachi に格納 */
void standard_score(double tensu[], int size, double hensachi[])
{
    int i;
    double ave, var, sd;

    /* 実数配列 tensu の平均と分散を求める */
    ave_var_double_array(tensu, size, &ave, &var);

    /* 標準偏差（分散の平方根）をニュートン法で求める */
    sd = root(var);

    /* 実数配列 tensu とその平均、標準偏差から偏差値を求め、hensachi に格納 */
    for (i = 0; i < size; i = i + 1) {
        hensachi[i] = 10.0 * (tensu[i] - ave) / sd + 50.0;
    }
}

int main(void)
{
    double a[100], b[100];
    int num, i;

    printf("データ数? ");
    scanf("%d", &num);

    readDoubleArray(a, num);

    /* 得点 a の偏差値を b に格納 */
    standard_score(a, num, b);

    for (i = 0; i < num; i = i + 1) {
        printf("%2d: 得点: %5.1f, 偏差値: %5.1f\n", i+1, a[i], b[i]);
    }
    
    return 0;
}
