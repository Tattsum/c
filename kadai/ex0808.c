#include <stdio.h>

/*  a が b より小さい場合 -1，a と b が等しい場合 0，それ以外の場合 1 を返す関数 */
int compare(int a, int b)
{
    /* 完成させなさい */
    if(a<b){
      return -1;
    }else if(a==b){
      return 0;
    }else{
      return 1;
    }
}

int main(void)
{

    int a, b;
    /* 適切な行をコメントアウトしなさい */
    a = 123; b = 231;
    a = 123; b = 123;
    a = 231; b = 123;

    /* --------- 以降は変更しないこと ------------------------------- */

    if (compare(a,b)==-1) {
        printf("%d < %d です．\n", a, b);
    } else if(compare(a,b)==0) {
        printf("%d = %d です．\n", a, b);
    } else {
        printf("%d > %d です．\n", a, b);
    }

    return 0;
}
