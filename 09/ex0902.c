/* ex0902.c */
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

int term_b(int n)
{
    /* 完成させなさい */
    int bn, i;

    bn = 0;
    for (i = 1; i <= n; i = i+1) {
        bn = bn + term_a(i-1);
    }

    return bn;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int n, bn;

    printf("整数 n を入力してください：");
    scanf("%d", &n);
    bn = term_b(n);
    printf("term_b(%d) = %d\n", n, bn);

    return 0;
}
