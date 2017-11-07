/* ou1202.c */
#include <stdio.h>

/* size個 の入力された実数値データを 配列の先頭から順番に格納する */
void readDoubleArray(double a[], int size)
{
	int i;
	for (i = 0; i < size; i = i+1) {
		printf("%d 番目? ", i+1);
		scanf("%lf", &a[i]);
	}
}

/* size個 の実数値データをもつ配列の要素の平均値を返す */
double aveDoubleArray(double a[], int size)
{
	int i;
	double sum;
	sum =0;
	for (i = 0; i < size; i = i+1) {
		sum = sum + a[i];
	}
	return sum/size;
}


int main(void)
{
	double data[100];
	double average;
	int size;
	
	printf("データの個数を入力してください：");
	scanf("%d",&size);
	
	readDoubleArray(data, size);
	
	average = aveDoubleArray(data, size);
	
    printf("要素の平均値：%f\n", average);

	return 0;
}
