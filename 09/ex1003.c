#include <stdio.h>

/* 自然数 n から 0まで一つずつ小さい数字を表示することでカウントダウンする手続き */
void countdown(int n)
{
    /* 完成させなさい */
    while (n >= 0) {
        printf("%d\n", n);
        n = n - 1;
    }
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int n;

    printf("自然数 n を入力してください：");
    scanf("%d", &n);
    countdown(n);

    return 0;
}
