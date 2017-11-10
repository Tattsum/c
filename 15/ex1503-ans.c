/*
 * <#src:b#>
 */

#include <stdio.h>

void print_mult_tbl(void)
{
    int i, j;

    // ここを補完しなさい
    for (i = 1; i < 10; i = i + 1) {
	for (j = 1; j < 10; j = j + 1) {
	    printf("%2d ", i * j);
	}
	printf("\n");
    }
}

int main(void)
{
    print_mult_tbl();

    return 0;
}
