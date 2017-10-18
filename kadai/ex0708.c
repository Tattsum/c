#include<stdio.h>

int main(void) /* 繰り返し（ループ）を使った計算 */
{
    int i; /* 使用する変数の宣言 */

    i = 0;
    while (i < 10) { /* 0 から 9 までの整数を表示 */
        printf("%d ", i);
        i = i + 1;
    }
    printf("\n");

    return 0;
}
