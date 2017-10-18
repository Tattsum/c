#include <stdio.h>

/*  x の絶対値を返す関数 */
int abs(int x)
{
  if(x<0){
    return (-x);
  }else{
    return x;
  }
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int a;
    a = -1;

    printf("a = %d \n", a);
    printf("abs(a) + 10 = %d \n", abs(a)+10);
    printf("abs(a+10) = %d \n", abs(a+10));
    printf("abs(a-10) = %d \n", abs(a-10));

    return 0;
}
