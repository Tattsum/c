/* ex0904.c */
#include <stdio.h>

/* 1 から n までの整数の総和を計算する関数 */
int souwa2(int n)
{
    /* 完成させなさい */
    int i, ans;

    ans = 0;
    for (i = 1; i <= n; i = i+1) {
        ans = ans + i;
    }

    return ans;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, ans;

    printf("整数 n を入力してください：");
    scanf("%d", &x);
    ans = souwa2(x);
    printf("1 から n までの整数の総和は %d です．\n", ans);

    return 0;
}
