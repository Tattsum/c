#include <stdio.h>

/* 2次方程式 a*x*x* + b*x + c = 0 の実数解の個数を求める関数 */
int num_of_ans(int a, int b, int c)
{
    /* 完成させなさい */
    int d=0;
    d=b*b-4*a*c;
    if(d>0){
      return 2;
    }else if(d==0){
      return 1;
    }else{
      return 0;
    }

}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int a, b, c;

    printf("x^2(xの2乗)の係数を入力してください：");
    scanf("%d",&a);
    printf("xの係数を入力してください：");
    scanf("%d",&b);
    printf("定数項を入力してください：");
    scanf("%d",&c);
    printf("%d x^2 + (%d) x + (%d) = 0 の実数解の個数は %d です．\n",a,b,c,num_of_ans(a,b,c));

    return 0;
}
