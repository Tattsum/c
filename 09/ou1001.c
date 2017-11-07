#include <stdio.h>

/* 引数 d の実数値を計算する関数 */
double dabs(double d)
{
    /* 完成させなさい */
    if (d < 0) {
        return -d;
    } else {
        return d;
    }
}

double cuberoot2(double eps)
{
    /* 完成させなさい */
    double x;
    x = 2.0;

    while (dabs(x*x*x-2.0) > eps) {
        x = x - (x*x*x-2.0) / (3.0*x*x);
    }

    return x;
}

int main(void)
{
    double e, result;

    e = 0.1;
    while (e >= 0.000001) {
        result = cuberoot2(e);
        /* 次の printf 関数の呼出しは変更しないこと */
        printf("%f    : %f    \n", e, result);
        e = e * 0.1;
    }

    return 0;
}

