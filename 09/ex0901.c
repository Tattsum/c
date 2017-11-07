/* ex0901.c */
#include <stdio.h>

int term_a(int n)
{
    /* 完成させなさい */
    int an, i;

    an = 1;
    for (i = 1; i <= n; i = i+1) {
        an = an * 2;
    }

    return an;
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int n, an;

    printf("整数 n を入力してください：");
    scanf("%d", &n);
    an = term_a(n);
    printf("term_a(%d) = %d\n", n, an);

    return 0;
}
