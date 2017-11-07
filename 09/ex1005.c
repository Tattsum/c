#include <stdio.h>

/* a が素数なら1，そうでなければ0を返す関数 */
int sosu(int a)
{
    int i, result;

    /* 宣言を使わずに完成させなさい */
    result = 1;
    for (i = 2; i <= a-1; i = i+1){
        if (a % i == 0) {
            result = 0;
        }
    }

    return result;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int n;

    printf("整数 n を入力してください：");
    scanf("%d", &n);

    if (sosu(n)) {
        printf("n は素数です．\n");
    } else {
        printf("n は素数ではありません．\n");
    }

    return 0;
}
