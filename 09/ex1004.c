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

double root3(double eps)
{
    /* 完成させなさい */
    double x;
    x = 3.0;

    while (dabs(x*x-3.0) > eps) {
        x = x - (x*x-3.0) / (2.0*x);
    }

    return x;
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    double e, result;

    printf("許容する誤差を入力してください：");
    scanf("%lf", &e);

    result = root3(e);
    printf("ルート 3 は， %f です。\n", result);

    return 0;
}
