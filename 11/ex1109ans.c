/* ex1108ans.c */
#include <stdio.h>

/* x / y の商と余りを出力する手続き */
void print_divmod(int x, int y)
{
/* 完成させなさい */
    int div, mod;

    div = x / y;
    mod = x % y;

    printf("%d 割る %d の商は %d です．\n", x, y, div);
    printf("%d 割る %d の余りは %d です．\n", x, y, mod);
}

int main(void)
{
    int a, b;

/* 完成させなさい */
    printf("整数 a を入力してください：");
    scanf("%d", &a);
    printf("整数 b を入力してください：");
    scanf("%d", &b);

    print_divmod(a, b);

    return 0;
}
