/* ex0907.c */
#include <stdio.h>

/* nCk を求める関数 */
int kumiawase(int n, int k)
{
    /* 完成させなさい */
    int i, ans1, ans2;

    ans1 = 1;
    ans2 = 1;
    for (i = n-k+1; i <= n; i = i+1) {
        ans1 = ans1 * i;
    }
    for (i = 1; i <=k ; i = i+1) {
        ans2 = ans2 * i;
    }

    return ans1 / ans2;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a, b, ans;

    printf("n を入力してください：");
    scanf("%d", &a);
    printf("k を入力してください：");
    scanf("%d", &b);
    ans = kumiawase(a, b);
    printf("%dC%d は %d です．\n", a, b, ans);

    return 0;
}
