#include <stdio.h>

/*  西暦 y 年が，うるう年のとき 1，それ以外は 0 を返す関数 */
int leapYear(int y)
{
    /* 完成させなさい */

    int leap;
    if(y%4==0){
      leap=1;
      if(y%100==0 && y%400!=0){
        leap=0;
      }
    }else{
      leap=0;
    }
    return leap;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int year;

    printf("year = ");
    scanf("%d", &year);

    if (leapYear(year)==1) {
        printf("%d 年はうるう年です\n", year);
    } else {
        printf("%d 年はうるう年ではありません\n", year);
    }
    return 0;
}
