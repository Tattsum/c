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

/*  整数 x, y, z, w のうち最も大きい値を返す関数 */
int max4(int x, int y, int z, int w)
{
    /* if 文を使用せず，関数 max2 を呼び出して完成させなさい */
    return max2(max2(max2(x,y),z),w);
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a, b, c, d;
    a = 123; b = 312; c = 213; d = 321;

    printf("%d と %d と %d と %d のうち最も大きい値は %d です．\n", a, b, c, d, max4(a,b,c,d));

    return 0;
}
