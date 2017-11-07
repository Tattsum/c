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

void print_yuai(int n)
{
    /* 完成させなさい */
    int i, ans;

    for (i = 1; i < n; i = i + 1) {
        if (sum(i) <= n && i < sum(i) && sum(sum(i)) == i) {
            /* printfの呼び出しは以下のみを変更せずに用いること */
            ans = sum(i);
            printf("(%d,%d)\n", i, ans);
        }
    }
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, ans;

    printf("整数 n を入力してください：");
    scanf("%d", &x);
    print_yuai(x);

    return 0;
}
