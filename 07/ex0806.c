#include <stdio.h>

/*  整数 x, y のうち小さい値を返す関数 */
int min2(int x, int y)
{
    /* 完成させなさい */
    if(x<y){
      return x;
    }else{
      return y;
    }
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int a, b;
    a = 234; b = 243;

    printf("%d と %d のうち小さい値は %d です．\n", a, b, min2(a,b));

    return 0;
}
