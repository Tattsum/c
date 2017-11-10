/*
 * <#src:b#>
 */

#include <stdio.h>

void calc_shou_amari(int x, int y, int *shou, int *amari)
{

    /* ここを補完しなさい */
    *shou = x / y;
    *amari = x % y;
}

int main(void)
{
    int a, b, div, mod;
	
    printf("a=? ");
    scanf("%d", &a);
    printf("b=? ");
    scanf("%d", &b);
	
    /*   calc_shou_amari を呼び出す   */
    calc_shou_amari(a, b, &div, &mod);
	
    printf("a 割る b は %d\n", div);
    printf("a 割る b の余りは %d\n", mod);

    return 0;
}
