#include <stdio.h>

/* a の自身を除く約数の和を計算する関数 */
int sum(int a)
{
    /* 完成させなさい */
    int i, sum;
    sum = 0;

    for (i = 1; i < a; i = i+1) {
        if (a % i == 0) {
            sum = sum + i;
        }
    }

    return sum;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, ans;

    printf("整数 a を入力してください：");
    scanf("%d", &x);
    ans = sum(x);
    printf("自身を除く約数の和は %d です．\n", ans);

    return 0;
}
