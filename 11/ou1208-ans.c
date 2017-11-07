/* ou1208.c */
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
		printf("%6.3f ", a[i]);
	}
	printf("\n");
}

/* size個 のデータが入っている配列中の要素の合計値を返す */
double sumDoubleArray(double a[], int size)
{
	int i;
	double sum;
	sum = 0;
	for (i = 0; i < size; i = i + 1) {
		sum= sum + a[i];
	}
	return sum;
}

/* size個 のデータが入っている配列中の要素をすべてx倍する */
void multDoubleArray(double x, double a[], int size)
{
	int i;
	for (i = 0; i < size; i = i + 1) {
		a[i] = a[i] * x;
	}
}


int main(void)
{
    double data[100];
    int size;
    double sum;
    
    printf("データの個数を入力してください：");
    scanf("%d",&size);
    
    readDoubleArray(data, size);
    
    printf("順番に出力:");
    printDoubleArray(data, size);
    
    sum = sumDoubleArray(data, size);    
    printf("要素の合計：%f\n", sum);

    multDoubleArray(1.0/sum, data, size);
    multDoubleArray(100, data, size);

    printf("100分率比 :");
    printDoubleArray(data, size);
    
    return 0;
}
