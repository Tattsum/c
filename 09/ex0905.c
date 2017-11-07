/* ex0905.c */
#include <stdio.h>

/* 値 x の階乗を求める関数 */
int kaijo(int x)
{
    /* 完成させなさい */
    int i, ans;

    ans = 1;
    for (i = 1; i <= x; i = i+1) {
        ans = ans * i;
    }

    return ans;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, ans;

    printf("整数 x を入力してください：");
    scanf("%d", &x);
    ans = kaijo(x);
    printf("整数 x の階乗は %d です．\n", ans);

    return 0;
}
