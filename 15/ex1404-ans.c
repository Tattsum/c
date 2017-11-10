/*
 * <#src:b#>
 */

#include <stdio.h>

void swap_int(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

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

/* 要素数sizeの整数配列aを逆順にする */
void reverseIntArray(int a[], int size)
{
    int i;
    
    for (i = 0; i < size/2; i = i+1) {
        /* a[i] と a[size-1-i]を交換 */
	swap_int(&a[i], &a[size-1-i]);
    }
}

int main(void)
{
  int data[100]; 
  int num;

  printf("データ数? ");
  scanf("%d", &num);

  readIntArray(data, num);
  reverseIntArray(data, num);
  printIntArray(data, num);
    
  return 0;
}
