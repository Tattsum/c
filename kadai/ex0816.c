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

/*  西暦 year 年 month 月の日数を返す関数 */
int daysOfMonth(int year, int month)
{
    /* 完成させなさい */
    int day;
    if(leapYear(year)==1){
      if(month==2){
        return 29;
      }
    }else{
      if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        day=31;
      }else if(month==2){
        day=28;
      }else if(month==4 || month==6 || month==9 || month==11){
        day=30;
      }else{
        day=0;
      }
    }
    return day;
}

/* --------- 以降は変更しないこと ------------------------------- */
int main(void)
{
    int year, month;

    printf("year = ");
    scanf("%d", &year);
    printf("month = ");
    scanf("%d", &month);

    printf("%d 年の %d 月は %d 日まであります \n", year, month, daysOfMonth(year, month));

    return 0;
}
