/* ex11064ans.c */
#include <stdio.h>

/* 2つの整数値 a, b の和を返す関数 */
int sum_int(int a, int b)
{
    return a + b;
}

double sum_double(double a, double b)
{
    return a + b;
}

/* --------- ここまでは変更しないこと ------------------------------- */

int main(void)
{
    int a, b, ans_int;
    double c, d, ans_double;

    printf("整数 a を入力してください：");
    scanf("%d", &a);
    printf("整数 b を入力してください：");
    scanf("%d", &b);
    ans_int = sum_int(a,b);

    printf("実数 c を入力してください：");
    scanf("%lf", &c);
    printf("実数 d を入力してください：");
    scanf("%lf", &d);
    ans_double = sum_double(c,d);

    printf("整数値の合計は %d です．\n", ans_int);
    printf("実数値の合計は %f です．\n", ans_double);

    return 0;
}
