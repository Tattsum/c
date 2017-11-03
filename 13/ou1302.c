/*
 * ou1302.c
 */

#include <stdio.h>

// 再帰を用いて最大公約数を計算する関数
int gcd(int m, int n)
{

 /* ここを補完しなさい　*/
    if ( m%n==0 ){
      return n;
    }else{
      return gcd(n,m%n);
    }
}


int main(void)
{
    int m, n;

    printf("m=? ");
    scanf("%d", &m);
    printf("n=? ");
    scanf("%d", &n);

    printf("gcd(%d, %d)= %d\n", m, n, gcd(m, n));

    return 0;
}
