/* ex1206.c */
#include <stdio.h>

/* size個 の入力されたデータを 配列の先頭から順番に格納する */
void readIntArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i = i+1) {
		printf("%d 番目? ", i+1);
		scanf("%d", &a[i]);
	}
}

/* size個 のデータが入っている配列を 配列の先頭から順に出力する */
void printIntArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i = i + 1) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

/* size個 のデータが入っている配列中の要素の合計値を返す */
int sumIntArray(int a[], int size)
{
	int sum,i;
	sum = 0;
	for (i = 0; i < size; i = i + 1) {
		sum= sum + a[i];
	}
	return sum;
}

int main(void)
{
	int data[100];
	int sum,size;
	
	printf("データの個数を入力してください：");
	scanf("%d",&size);
	
	readIntArray(data, size);
	printf("順番に出力:");
	printIntArray(data, size);
	
	sum = sumIntArray(data, size);
	
    printf("要素の合計：%d\n", sum);

    return 0;
}
