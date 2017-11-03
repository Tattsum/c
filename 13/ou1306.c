/*
ou1306.c
*/

#include <stdio.h>

void reverseIntArray(int a[], int size)
{
// ここを補完しなさい
  int i;
  for (i=size-1; i>=0; i=i-1){
    printf("%d ", a[i]);
  }
  printf("\n");
}

void readIntArray(int a[], int size)
{
// ここを補完しなさい
  int i;
  for (i=0; i<size; i=i+1){
    printf("%d番目? ",i+1);
    scanf("%d",&a[i]);
  }
}

void printIntArray(int a[], int size)
{
// ここを補完しなさい
  int i;
  for (i=0; i<size; i=i+1){
    printf("%d ", a[i]);
  }
  printf("\n");
}



int main(void)
{
  int data[100], size;

  printf("n=? ");
  scanf("%d", &size);

  readIntArray(data, size);
  printIntArray(data, size);
  reverseIntArray(data, size);

  return 0;
}
