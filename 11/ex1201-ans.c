/* ex1201.c */
#include <stdio.h>

int main(void)
{
  // int 型の要素を持つ配列(要素数12)
  int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  int i;
  for (i = 0; i < 12; i = i+1) {
    printf("2016 年 %2d 月は %d 日です．\n", i+1, days[i]);
  }
  return 0;
}

