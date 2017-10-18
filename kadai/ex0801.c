#include <stdio.h>

/*  整数 x, y のうち大きい値を返す関数 */
int max2(int x, int y)
{
    /* 完成させなさい */
    if(x<=y){
      return y;
    }else{
      return x;
    }
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int a, b;
    a = 123; b = 234;

    printf("%d と %d のうち大きい値は %d です．\n", a, b, max2(a,b));

    return 0;
}
