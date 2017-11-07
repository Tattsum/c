/* ou0902.c */
#include <stdio.h>

/* xとy の公倍数のうち，n 以下の公倍数の個数を計算する関数 */
int kobaisu(int n, int x, int y)
{
    /* 完成させなさい */
    int i, count;

    count = 0;
    for (i = 1; i<=n; i = i+1) {
        if ((i % x == 0) && (i % y == 0)) {
            count = count + 1;
        }
    }

    return count;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, y, n, ans;

    printf("整数 n を入力してください：");
    scanf("%d", &n);
    printf("整数 x を入力してください：");
    scanf("%d", &x);
    printf("整数 y を入力してください：");
    scanf("%d", &y);
    ans = kobaisu(n, x, y);
    printf("条件を満たす公倍数の個数は %d です．\n", ans);

    return 0;
}
