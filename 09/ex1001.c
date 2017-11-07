#include <stdio.h>

int gcd(int m, int n)
{
    int r;

    /* 宣言を使わずに完成させなさい */

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, y, ans;

    printf("整数 x を入力してください：");
    scanf("%d", &x);
    printf("整数 y を入力してください：");
    scanf("%d", &y);

    ans = gcd(x, y);
    printf("%d と %d の最大公約数は %d です。\n", x, y, ans);

    return 0;
}
