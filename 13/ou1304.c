/*
 * ou1304.c
 */

#include <stdio.h>

// 再帰を用いて　x の n 乗を計算する関数
double power(double x, int n)
{

/* ここを補完しなさい　*/
    double pow = 1;
    if (n > 0){
      if ( n==0 ){
        pow = 1;
      }else{
        pow = x * power(x,n-1);
      }
    }else{
      if ( n==0 ){
        pow = 1;
      }else{
        pow = 1/x * power (x, n+1);
      }
    }
    return pow;
}


int main(void)
{
    int n;
    double x;

    printf("x=? ");
    scanf("%lf", &x);
    printf("n=? ");
    scanf("%d", &n);

    printf("x^n= %f\n", power(x, n));

    return 0;
}
