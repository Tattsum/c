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

/*  整数 x, y, z, u, v のうち最も小さい値を返す関数 */

int min5(int x, int y, int z, int u, int v)
{
    /* if 文を使用せず，関数 min2 を呼び出して完成させなさい */
    return min2(min2(min2(min2(x,y),z),u),v);
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int a, b, c, d, e;
    a = 123; b = 231; c = 312; d = 213; e = 132;

    printf("%d と %d と %d と %d と %d のうち最も小さい値は %d です．\n", a, b, c, d, e, min5(a,b,c,d,e));

    return 0;
}
