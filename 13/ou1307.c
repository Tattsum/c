/*
ou1307.c
*/

#include <stdio.h>


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

int sumIntArray(int a[], int size)
{
// ここを補完しなさい
  int i,sum = 0;
  for (i=0;i<size;i=i+1){
    sum = sum + a[i];
  }
  return sum;
}

int main(void)
{
  int data[100], n, sum;
  double average;

  printf("n=? ");
  scanf("%d", &n);

  readIntArray(data, n);
  printIntArray(data, n);

  sum = sumIntArray(data, n);
  printf("sum = %d\n", sum);

// ここを補完しなさい
  average = (double) sum / n;
  printf("average = %f\n", average);
  return 0;
}
