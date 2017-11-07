/* ex1103ans.c */
#include <stdio.h>

double average(int x, int y, int z)
{
    return (x + y + z) / 3.0;
}

int main(void)
{
    int a, b, c;
    double d;

/* --------- これより上は変更しないこと ------------------------------- */
/* 完成させなさい */

    printf("整数 a を入力してください：");
    scanf("%d", &a);
    printf("整数 b を入力してください：");
    scanf("%d", &b);
    printf("整数 c を入力してください：");
    scanf("%d", &c);

    d = average(a, b, c);
    printf("整数 a, b, c の平均値は %f です．\n", d);

    return 0;
}
