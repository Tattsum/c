#include <stdio.h>

/* 3つの値 a, b, c の中央値を返す関数 */
int median(int a, int b, int c)
{
    /* 完成させなさい */
    int max,min,med;
    min = max = a;

    if(b<min)
      min=b;

    if(c<min)
      min=c;

    if(b>max)
      max=b;

    if(c>max)
      max=c;

    if(a!=min && a!=max)
      med=a;

    if(b!=min && b!=max)
      med=b;

    if(c!=min && c!=max)
      med=c;


    return med;
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int x, y, z;

    printf("整数 x を入力してください：");
    scanf("%d",&x);
    printf("整数 y を入力してください：");
    scanf("%d",&y);
    printf("整数 z を入力してください：");
    scanf("%d",&z);
    printf("整数 x, y, z の中央値は %d です．\n", median(x,y,z));

    return 0;
}
