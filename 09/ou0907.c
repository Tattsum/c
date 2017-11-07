#include <stdio.h>

/* num の各桁の合計を返す関数 */
int sum_digits(int num)
{
    int sum;

    /* for 文と代入を行う文のみで完成させなさい */
    for (sum = 0; num > 0; num = num / 10) {
        sum = sum + num % 10;
    }

    return sum;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int n, ans;

    printf("整数 n を入力してください：");
    scanf("%d", &n);
    ans = sum_digits(n);
    printf("n の各桁の和は %d です．\n", ans);

    return 0;
}
