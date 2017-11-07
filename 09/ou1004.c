#include <stdio.h>

/* a が素数なら1，そうでなければ0を返す関数 */
int sosu(int a)
{
    /* 完成させなさい */
    int i;

    if (a == 2) {
        return 1;
    }
    if (a % 2 == 0) {
        return 0;
    }

    for (i = 3; i <= a-1; i = i+2) {
        if (a % i == 0) {
            return 0;
        }
    }

    return 1;
}

void print_sosu(int n)
{
    /* 完成させなさい */
    int i;

    for (i = 2; i <= n; i = i+1) {
        if (sosu(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x;

    printf("整数 n を入力してください：");
    scanf("%d", &x);
    print_sosu(x);

    return 0;
}
