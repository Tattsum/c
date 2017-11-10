/*
 * <#src:b#>
 */

#include <stdio.h>

void calc_wa_sa(int x, int y, int *wa, int *sa)
{

    /* ここを補完しなさい */
    *wa = x + y;
    *sa = x - y;
}

int main(void)
{
    int a, b, sum, diff;
	
    printf("a=? ");
    scanf("%d", &a);
    printf("b=? ");
    scanf("%d", &b);
	
    /*   calc_wa_sa を呼び出す   */
    calc_wa_sa(a, b, &sum, &diff);
	
    printf("a と b の和は %d\n", sum);
    printf("a と b の差は %d\n", diff);

    return 0;
}
