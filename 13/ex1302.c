/*
 * ex1302.c
 */

#include <stdio.h>

void swap_int(int *p, int *q)
{

// ここを補完しなさい

    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp; 

}

int main(void)
{
    int a = 123, b = 456;

    printf("a= %d\n", a);
    printf("b= %d\n", b);

    swap_int(&a, &b);

    printf("a= %d\n", a);
    printf("b= %d\n", b);

    return 0;
}
