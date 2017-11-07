/* ou1206.c */
#include <stdio.h>

/* size個 の入力されたデータを 配列の先頭から順番に格納する */
void readIntArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i = i + 1) {
        printf("%d 番目? ", i+1);
        scanf("%d", &a[i]);
    }
}

//要素数size の整数配列 a の中の二番目に大きい値を返す．

int maxsecondIntArray(int a[], int size)
{
    int i, max, second;
    if (a[0]>a[1]){
		max = a[0];
        second = a[1];
    }else{
		max = a[1];
        second = a[0];
    }
    
    for (i = 2; i < size; i = i+1) {
        if (a[i] > max) {
			second = max;
            max = a[i];
        }else if (a[i] > second) {
			second = a[i];
        }
    }
    return second;
}

int main(void)
{
   int result, size, data[20];

   printf("データの数を入力してください：");
   scanf("%d",&size);
  
   readIntArray(data, size);
  
   result = maxsecondIntArray(data, size);
   printf("二番目に大きい値は %d です。\n", result);

   return 0;
}

