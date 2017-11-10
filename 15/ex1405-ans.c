/*
 * <#src:b#>
 */

#include <stdio.h>

void succ(int *x)
{
    *x = *x + 1;
}

int main(void)
{
    int i;

    for (i = 0; i < 10; succ(&i)) {
	printf("%d ", i);
    }
    printf("\n");

    return 0;
}

