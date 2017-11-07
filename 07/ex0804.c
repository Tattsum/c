#include <stdio.h>

/*  整数 x, y, z, w のうち最も大きい値を返す関数 */
int max4(int x, int y, int z, int w)
{
    /* 完成させなさい */
    /* if 文を用いて関数 max4 を作成すること．（max2，max3 を用いない．） */
    int max1,max2;
    if(x<y){
      max1=y;
    }else{
      max1=x;
    }

    if(z<w){
      max2=w;
    }else{
      max2=z;
    }

    if(max1<max2){
      return max2;
    }else{
      return max1;
    }
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a, b, c, d;
    a = 123; b = 312; c = 213; d = 321;

    printf("%d と %d と %d と %d のうち最も大きい値は %d です．\n", a, b, c, d, max4(a,b,c,d));

    return 0;
}
