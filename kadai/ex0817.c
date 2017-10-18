#include <stdio.h>

/*  dist [m] に対応するタクシー運賃を返す関数 */
int fee(int dist)
{
    /* 完成させなさい */
    int d=0,fee=600;
    d=dist-1200;
    if(dist>1200){
      if(d%255==0){
        fee=fee+(d/255)*90;
      }else{
        fee=fee+(d/255+1)*90;
      }
    }
    return fee;

}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int dist;

    printf("距離 [m] = ");
    scanf("%d", &dist);

    printf("運賃は %d 円です \n", fee(dist));

    return 0;
}
