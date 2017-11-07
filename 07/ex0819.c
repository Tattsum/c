#include <stdio.h>

/* 2つの値 x, y の差(大きい方から小さい方を引いた値)を返す関数 */
int diff(int x, int y)
{
    /* 完成させなさい */
    if(x<y){
      return (y-x);
    }else{
      return (x-y);
    }

}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int x, y, z;

    printf("整数 x を入力してください：");
    scanf("%d",&x);
    printf("整数 y を入力してください：");
    scanf("%d",&y);
    printf("整数 x と y の差は %d です．\n", diff(x,y));

    return 0;
}
