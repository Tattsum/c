#include <stdio.h>

/* a の約数の個数を計算する関数 */
int yakusu(int a)
{
    int i, count;
    count = 0;

    for (i = 1; i <= a; i = i+1) {
        if (a % i == 0) {
            count = count + 1;
        }
    }

    return count;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, ans;

    printf("整数 a を入力してください：");
    scanf("%d", &x);
    ans = yakusu(x);
    printf("a の約数の個数は %d です．\n", ans);

    return 0;
}
