#include <stdio.h>

/*  整数 x, y, z のうち最も大きい値を返す関数 */
int max3(int x, int y, int z)
{
    /* 完成させなさい */
    /* if 文を用いて関数 max3 を作成すること．（max2 を用いない．）*/

    if(x<y){
      if(y<z){
        return z;
      }else{
        return y;
      }
    }else{
      if(x<z){
        return z;
      }else{
        return x;
      }
    }
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int a, b, c;
    a = 123; b = 312; c = 213;

    printf("%d と %d と %d のうち最も大きい値は %d です．\n", a, b, c, max3(a,b,c));

    return 0;
  }
