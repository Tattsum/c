/*
 * ex1305.c
 */

#include <stdio.h>

/* size個 の入力されたデータを 配列の先頭から順番に格納する */
void readIntArray(int a[], int size)
{
// ここを補完しなさい
    int i;
    for (i=0; i<size; i=i+1){
      printf("%d番目? ",i+1);
      scanf("%d",&a[i]);
    }
}

/* size個 のデータが入っている配列を 配列の先頭から順に出力する */
void printIntArray(int a[], int size)
{
// ここを補完しなさい
    int i;
    for (i=0; i<size; i=i+1){
      printf("%d ", a[i]);
    }
    printf("\n");
}

//要素数size の整数配列 a の中の最小値を返す．
int minIntArray(int a[], int size)
{
 // ここを補完しなさい
    int i, min = a[0];
    for (i=1; i<size; i=i+1){
      if (min > a[i]){
        min = a[i];
      }
    }
    return min;
}

int main(void)
{
  int data[100], size, minv;
    /* 必要な変数を宣言 */

    printf("データの個数を入力してください：");
    scanf("%d",&size);

    readIntArray(data, size);
    printf("順番に出力:");
    printIntArray(data, size);

    minv = minIntArray(data, size); /* ???? を適切な関数の呼び出しに書き換え */

    printf("最小値は %d です．\n", minv);

    return 0;
}
