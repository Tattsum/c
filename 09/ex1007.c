#include <stdio.h>

/* a から b までの整数の総和を計算する関数 */
int sum(int a, int b)
{
    /* while文を用いて（for文を用いずに）完成させなさい */
    int i, ans;
    ans = 0;

    i = a;
    while (i <= b) {
        ans = ans + i;
        i = i + 1;
    }

    return ans;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, y, ans;

    printf("整数 a を入力してください：");
    scanf("%d", &x);
    printf("整数 b を入力してください：");
    scanf("%d", &y);
    ans = sum(x, y);
    printf("a から b までの整数の総和は %d です．\n", ans);

    return 0;
}
