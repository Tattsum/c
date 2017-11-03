/*
ou1305.c
*/

#include <stdio.h>

void sqarray(int data[], int size)
{
 // ここを補完しなさい
 int i;
 for (i=0;i<size;i=i+1){
   data[i] = i*i;
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
  int data[100], n;

  printf("n=? ");
  scanf("%d", &n);

  sqarray(data, n);
  printIntArray(data, n);


return 0;
}
