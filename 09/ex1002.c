#include <stdio.h>

/* 引数 d の実数値を計算する関数 */
double dabs(double d)
{
    if (d < 0) {
        return -d;
    } else {
        return d;
    }
}

double root2(double eps)
{
    double x;
    x = 2.0;

    while (dabs(x*x-2.0) > eps) {
        x = x - (x*x-2.0) / (2.0*x);
    }

    return x;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    double e, result;

    printf("許容する誤差を入力してください：");
    scanf("%lf", &e);

    result = root2(e);
    printf("ルート 2 は， %f です。\n", result);

    return 0;
}
