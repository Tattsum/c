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

/*  整数 x, y, z のうち最も大きい値を返す関数 */
int max3(int x, int y, int z)
{
    /* if 文を使用せず，関数 max2 を呼び出して完成させなさい */
    return max2(max2(x,y),z);
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a, b, c;
    a = 123; b = 312; c = 213;

    printf("%d と %d と %d のうち最も大きい値は %d です．\n", a, b, c, max3(a,b,c));

    return 0;
}
