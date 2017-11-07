/* ex1105ans.c */
#include <stdio.h>

/* 完成させなさい */
int cube_int(int x)
{
    return x * x * x;
}

double cube_double(double x)
{
    return x * x * x;
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
    result_int = cube_int(a);
    printf("その数の３乗は %d です．\n", result_int);

    printf("実数 b を入力してください：");
    scanf("%lf", &b);
    result_double = cube_double(b);
    printf("その数の３乗は %f です．\n", result_double);

    return 0;
}
