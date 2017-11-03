/*
 * ou1303.c
 */

#include <stdio.h>

//　再帰を用いてトリボナッチ数列を計算する関数
int trib(int n)
{

 /* ここを補完しなさい　*/
    int ans = 0;
    if (n==0){
      ans = 0;
    }else if (n==1){
      ans = 0;
    }else if (n==2){
      ans = 1;
    }else{
      ans = trib(n-1)+trib(n-2)+trib(n-3);
    }
    return ans;

}


int main(void)
{
    int n;

    printf("n=? ");
    scanf("%d", &n);

    printf("trib(%d)= %d\n", n, trib(n));

    return 0;
}
