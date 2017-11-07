/* ex0906.c */
#include <stdio.h>

/* nPk を求める関数 */
int junretsu(int n, int k)
{
    /* 完成させなさい */
    int i, ans;

    ans = 1;
    for (i = n-k+1; i <= n; i = i+1) {
        ans = ans * i;
    }

    return ans;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a, b, ans;

    printf("n を入力してください：");
    scanf("%d", &a);
    printf("k を入力してください：");
    scanf("%d", &b);
    ans = junretsu(a, b);
    printf("%dP%d は %d です．\n", a, b, ans);

    return 0;
}
