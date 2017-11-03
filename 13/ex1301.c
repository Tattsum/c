/*
 * ex1301.c
 */

#include <stdio.h>


// 再帰を用いて階乗を計算する関数
int fact(int n)
{

// ここを補完しなさい
  int f = 1;
  if (n == 0){
    f = 1;
  }else{
    f = n * fact(n-1);
  }
  return f;
}

int main(void)
{
    int n;

    printf("n=? ");
    scanf("%d", &n);

    printf("n!= %d\n", fact(n));

    return 0;
}
