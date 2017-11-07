#include <stdio.h>

/*  x が 19 で割り切れる場合 1，それ以外の場合 0 を返す関数*/
int mod19(int x)
{
    /* 完成させなさい */
    if(x%19==0){
      return 1;
    }else{
      return 0;
    }
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a = 999999;

    if (mod19(a) == 1) {
        printf("%d は 19 で割り切れます．\n", a);
    } else {
        printf("%d は 19 で割りきれません．\n", a);
    }

    return 0;
}
