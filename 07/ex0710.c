#include <stdio.h>

int main(void) /* 繰り返し（ループ）を使った計算 */
{
    int i, j, a[15]; /* 使用する変数と配列の宣言 */

    j = 0;
    i = 1;
    while (i < 30) { /* 1 から 29 までの奇数を配列に格納 */
        if ( i % 2 == 1) { /* もし i が奇数なら a[j] に i を格納 */
            a[j] = i;
            j = j + 1;
        }
        i = i + 1;
    }

    j = 0;
    while (j < 15) { /* a[j] を表示 */
        printf("a[%d] = %d \n", j, a[j]);
        j = j + 1;
    }

    return 0;
  }
