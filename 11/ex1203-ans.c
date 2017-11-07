/* ex1203.c */
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

/* na個 のデータが入っている集合に x と等しい要素があるかどうかを判定する \ */
int memberOf(int x, int a[], int na)
{
	int i;
	int found;
	found = 0;
	for (i = 0; i < na; i = i + 1) {
		if (a[i] == x) {
			found = 1;
		}
	}
	return found;
}

//要素数size の整数配列 a の中の最大値を返す．

int maxIntArray(int a[], int size)
{
	int i, max;
	max = a[0];
	for (i = 1; i < size; i = i+1) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int main(void)
{
	int data[10];
	int maxv;
	
	readIntArray(data, 10);
	printf("順番に出力:");
	printIntArray(data, 10);
	
	maxv = maxIntArray(data, 10);
	
	if (memberOf(maxv, data, 10)){
		printf(" %d は存在する．\n", maxv);
	}else{
		printf(" %d は存在しない．\n", maxv);		
	}	

	if (memberOf(maxv+1, data, 10)){
		printf(" %d は存在する．\n", maxv+1);
	}else{
		printf(" %d は存在しない．\n", maxv+1);		
	}	

    return 0;
}
