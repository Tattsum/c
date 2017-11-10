/*
 * <#src:b#>
 */

#include <stdio.h>

/* ポインタ n が指し示す値を x 倍する手続き */
void times(int *n, int x)
{
    *n = *n * x;
}

int main(void)
{
    int i, a, r;

    printf("初項 a? ");
    scanf("%d", &a);
    printf("公差 r? ");
    scanf("%d", &r);

    for (i = 1; i <= 10; i = i + 1) {
	printf("%d ", a);
        times(&a, r);
    }
    printf("\n");

    return 0;
}

