/*
 * <#src:b#>
 */

#include <stdio.h>

/* 要素数sizeの整数配列aに順に入力する */
void readIntArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i = i+1) {
	printf("%d 番目? ", i+1);
	scanf("%d", &a[i]);
    }
}

/* 要素数sizeの整数配列aを順に出力する */
void printIntArray(int a[], int size)
{
    int i;

    for (i = 0; i < size; i = i+1) {
	printf("%d ", a[i]);
    }
    printf("\n");
}

/* 要素数sizeの整数配列aの最大値を *max に、
   2番目に大きい値を *max2 に格納する */
void max2IntArray(int a[], int size, int *max, int *max2)
{
  int i;

  if (a[0] > a[1]) {
      *max = a[0];
      *max2 = a[1];
  } else {
      *max = a[1];
      *max2 = a[0];
  }

  for (i = 2; i < size; i = i + 1) {
    if (a[i] >= *max) {
      *max2 = *max;
      *max = a[i];
    } else if (a[i] > *max2) {
      *max2 = a[i];
    }
    
  }
}

int main(void)
{
  int data[100]; 
  int num, max, max2;

  printf("データ数? ");
  scanf("%d", &num);

  readIntArray(data, num);
  printIntArray(data, num);
  max2IntArray(data, num, &max, &max2);

  printf("最大値: %d, 2番目: %d\n", max, max2);
    
  return 0;
}
