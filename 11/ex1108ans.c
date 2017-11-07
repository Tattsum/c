/* ex1107ans.c */
#include <stdio.h>

/* x の絶対値を計算する関数 */
double dabs(double x)
{
/* 完成させなさい */
    double result;
    if ( x > 0 )
        result = x;
    else 
        result = -x;
    return result;
}

int main(void)
{
  double d, da;
    printf("実数 d を入力してください：");

/* 完成させなさい */
    scanf("%lf", &d);

    da = dabs(d);
    printf("その数の絶対値は %f です．\n", da);

    return 0;
}
