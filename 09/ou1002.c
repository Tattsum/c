#include <stdio.h>

/* a 以上  b 以下の奇数の個数を計算する関数 */
int kisu(int a, int b)
{
    /* 完成させなさい */
    int i, count;
    count = 0;

    for (i = a; i <= b; i = i+1) {
        if (i % 2 == 1) {
            count = count + 1;
        }
    }

    return count;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, y, ans;

    printf("整数 a を入力してください：");
    scanf("%d", &x);
    printf("整数 b を入力してください：");
    scanf("%d", &y);
    ans = kisu(x,y);
    printf("a 以上 b 以下の奇数の個数は %d です．\n", ans);

    return 0;
}
