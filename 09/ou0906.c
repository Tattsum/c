#include <stdio.h>

/* 2つの値 a, b の商（小数点以下は切り捨て）を返す関数 （* / %は使用不可） */
int divide(int a, int b)
{
    int count;
    /* 以下，文の並びのみで完成させなさい */

    for (count = 0; a >= b; a = a - b) {
        count = count + 1;
    }

    return count;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a, b, ans;

    printf("整数 a を入力してください：");
    scanf("%d", &a);
    printf("整数 b を入力してください：");
    scanf("%d", &b);
    ans = divide(a,b);
    printf("a÷b は %d です．\n", divide(a,b));

    return 0;
}
