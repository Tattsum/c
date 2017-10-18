#include <stdio.h>

/* 引数に与えられた値 x が
   60 以上 100 以下ならば 1 を
   0 以上 60 未満ならば，0を
   その他は -1 を返す関数 */
int s2pf(int x)
{
    /* 完成させなさい */
    if(x>100){
      return -1;
    }else if (x>=60){
      return 1;
    }else if (x>=0){
      return 0;
    }else{
      return -1;
    }

}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int x, result;

    printf("点数を入力してください：");
    scanf("%d",&x);
    result = s2pf(x);
    if (result == 1) {
        printf("合格です．\n");
    } else if(result == 0) {
        printf("不合格です．\n");
    } else {
        printf("入力された点数が不正です．\n");
    }

    return 0;
}
