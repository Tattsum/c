/* ex1102ans.c */
#include <stdio.h>

/* 完成させなさい */
int sqr_int(int x)
{
    return x * x;
}

double sqr_double(double x)
{
    return x * x;
}

int main(void)
{
    int a;
    double b;
    int result_int;
    double result_double;

/* --------- これより上は変更しないこと ------------------------------- */

    printf("整数 a を入力してください：");
    scanf("%d", &a);
    result_int = sqr_int(a);
    printf("その数の２乗は %d です．\n", result_int);

    printf("実数 b を入力してください：");
    scanf("%lf", &b);
    result_double = sqr_double(b);
    printf("その数の２乗は %f です．\n", result_double);

    return 0;
}
