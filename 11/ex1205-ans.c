/* ex1205.c */
#include <stdio.h>

/* size個 の入力されたデータを 配列の先頭から順番に格納する */
void readDoubleArray(double a[], int size)
{
	int i;
	for (i = 0; i < size; i = i+1) {
		printf("%d 番目? ", i+1);
		scanf("%lf", &a[i]);
	}
}

/* size個 のデータが入っている配列を 配列の先頭から順に出力する */
void printDoubleArray(double a[], int size)
{
	int i;
	for (i = 0; i < size; i = i + 1) {
		printf("%f ", a[i]);
	}
	printf("\n");
}

//要素数size の整数配列 a の中の最大値を返す．

double maxDoubleArray(double a[], int size)
{
	int i;
	double max;
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
	double data[10];
	readDoubleArray(data, 10);
	printf("順番に出力:");
	printDoubleArray(data, 10);
	printf("最大値:%f\n", maxDoubleArray(data,10));

	return 0;
}
