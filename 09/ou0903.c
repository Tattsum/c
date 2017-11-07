/* ou0903.c */
#include <stdio.h>

/* 1 から n までの2乗の数の和を計算する関数
    繰り返しは1からスタートし，ｎで終わること */
int nijowa(int n)
{
    /* 完成させなさい */
    int answer, i;

    answer = 0;
    for (i = 1; i <= n ; i = i+1){
        answer = answer + i*i;
    }

    return answer;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int n, ans;

    printf("整数 a を入力してください：");
    scanf("%d", &n);
    ans = nijowa(n);
    printf("1 から n までの2乗の数の和は %d です．\n", ans);

    return 0;
}
