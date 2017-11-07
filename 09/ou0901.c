/* ou0901.c */
#include <stdio.h>

/* 2つの値 a, b の積を返す関数 （*は使っちゃダメ） */
int seki(int a, int b)
{
    /* 完成させなさい */
    int i, ans;

    ans = 0;
    for (i = 1; i <= b; i = i+1) {
        ans = ans + a;
    }

    return ans;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a, b, ans;

    printf("整数 a を入力してください：");
    scanf("%d", &a);
    printf("整数 b を入力してください：");
    scanf("%d", &b);
    ans = seki(a, b);
    printf("整数 a, b の積は %d です．\n", ans);

    return 0;
}
