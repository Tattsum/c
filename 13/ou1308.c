/*
ou1308.c
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
void printAstArray(int a[], int size)
{
// ここを補完しなさい
  int i,j;
  for (i=0;i<size;i=i+1){
    for (j=0;j<a[i];j=j+1){
      printf("*");
    }
    printf("\n");
  }
}

int main(void)
{
	int data[100], size;

	printf("n=? ");
	scanf("%d", &size);

	readIntArray(data, size);
	printAstArray(data, size);

	return 0;
}
