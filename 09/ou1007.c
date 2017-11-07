#include <stdio.h>

/* その数自身を除く約数の和が、その数自身と等しい自然数かを判定する関数 */
int kanzen(int a)
{
    /* 完成させなさい */
    int i, sum;
    sum = 0;

    for (i = 1; i < a; i = i+1) {
        if (a % i == 0) {
            sum = sum + i;
        }
    }

    return sum == a;
}

void print_kanzen(int n)
{
    /* 完成させなさい */
    int i;

    for (i = n; i > 0; i = i - 1) {
        if (kanzen(i)) {
            /* printfの呼び出しは以下のみを変更せずに用いること */
            printf("%d ", i);
        }
    }
    printf("\n");
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x, ans;

    printf("整数 n を入力してください：");
    scanf("%d", &x);
    print_kanzen(x);

    return 0;
}
