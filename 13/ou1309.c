/*
ou1309.c
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

void printDistArray(int d[])
{
// ここを補完しなさい
  int i,j;
  for (i=0;i<11;i=i+1){
    if(10*i == 100){
      printf ("%d:",10*i);
    }else{
      printf("%d ~ %d:",10*i,10*i+9);
    }
    for (j=0;j<d[i];j=j+1){
      printf("*");
    }
    printf("\n");
}
}

void distIntArray(int a[], int d[], int size)
{
// ここを補完しなさい
    int i,j;
    for (j=0;j<11;j=j+1){
      for (i=0;i<size;i=i+1){
        if ( 10*j <= a[i] && a[i] <10*j+10){
          d[j] = d[j] + 1;
        }
      }
    }
}

int main(void)
{
	int data[100], size, dist[11]={0};

	printf("size = ");
	scanf("%d", &size);

	readIntArray(data, size);
	distIntArray(data, dist, size);
	printDistArray(dist);

	return 0;
}
