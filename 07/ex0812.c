#include <stdio.h>

/*  x の二乗を返す関数 */
int square(int x)
{
    /* 完成させなさい */
    return x*x;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a, b, c;
    a = 2; b = 3; c = 4;

    printf("a = %d \n", a);
    printf("a*a = %d \n", square(a));
    printf("b = %d \n", b);
    printf("b*b = %d \n", square(b));
    printf("c = %d \n", c);
    printf("c*c = %d \n", square(c));

    return 0;
}
