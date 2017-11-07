#include <stdio.h>

/* a が素数なら1，そうでなければ0を返す関数 */
int isprimenew(int a)
{
    int i;

    /* 以下，文の並びのみで完成させなさい */
    if (a == 2) {
        return 1;
    }
    if (a % 2 == 0) {
        return 0;
    }

    for (i = 3; i <= a - 1; i = i + 2) {
        if (a % i == 0) {
            return 0;
        }
    }

    return 1;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int x;

    printf("整数 a を入力してください：");
    scanf("%d", &x);

    if (isprimenew(x)) {
        printf("a は素数です．\n");
    } else {
        printf("a は素数ではありません．\n");
    }

    return 0;
}
