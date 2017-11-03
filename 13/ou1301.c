/*
 * ou1301.c
 */

#include <stdio.h>

// 再帰を用いて１からｎまでの二乗和を計算する関数
int sqsum(int n)
{
// ここを補完しなさい
    int ans=0;
    if(n==1){
      ans = 1;
    }else{
      ans = n*n + sqsum(n-1);
    }
    return ans;
}


int main(void)
{
    int n;

    printf("n=? ");
    scanf("%d", &n);

    printf("ans= %d\n", sqsum(n));

    return 0;
}
