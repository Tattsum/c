#include <stdio.h>

/* x が y で割り切れる場合 1，それ以外の場合 0 を返す関数 */
int xmody(int x, int y)
{
    /* 完成させなさい */
    if(x%y==0){
      return 1;
    }else{
      return 0;
    }
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a = 999999, b = 142857;

    if (xmody(a, b) == 1) {
        printf("%d は %d で割り切れます．\n", a, b);
    } else {
        printf("%d は %d で割りきれません．\n", a, b);
    }

    return 0;
}
