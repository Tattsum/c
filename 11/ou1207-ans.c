/* ou1207.c */
#include <stdio.h>


/* 配列 a について，x+1 以上 size -1 以下の添え字番号について，
   x で割り切れる添え字番号の要素に 0 を代入する  
   例：x=2 なら，a[4]=0, a[6]=0，a[8]=0，以下同様となる*/
   
void erase_element(int x, int a[], int size)
{
    int i;
    for (i = x+1; i <= size-1; i = i + 1) {
        if ( i % x == 0){
			a[i] = 0;
		} 
    }
}


int main(void)
{
   int count, i, size, data[10001];
   
   size = 10001;


  /* data[2] から data[10000] までをすべて 1に初期化する */
   for (i = 0; i < size; i = i + 1) {
        data[i] = 1;
   }
   
  /* 割り切れる要素を除外していく． */
   for( i = 2; i<= 10000; i= i+1){
       erase_element(i, data, 10001);
   }
   
  /* 素数である要素をカウントしていく． */
   count = 0;
   for(i= 2; i<= 10000; i= i+1){
	  if (data[i] ==1) {
		 count++;
		 printf(" %d", i);
	  }
   }
   
   printf("\n素数の個数： %d\n",count);

   return 0;
}


