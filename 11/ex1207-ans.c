/* ex1207.c */
#include <stdio.h>

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

// 集合a と集合b の積集合を集合c として求める
// na, nb は，集合a, b の要素数
// 返り値は，集合c の要素数
int intersection(int a[], int na, int b[], int nb, int c[])
{
	int i, j;
	j = 0;
	for (i = 0; i < na; i = i + 1) {
            if ( memberOf(a[i], b, nb)) {
			c[j] = a[i];
			j = j + 1;
		}
	}
	return j;
}


int main(void)
{
	int SA[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int SB[10] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
	int SC[20];
	int result;
	
	printf("集合A: ");
	printIntArray(SA, 10);
	printf("集合B: ");
	printIntArray(SB, 10);
	
	result = intersection(SA,10,SB,10,SC);
	printf("集合A∩B: ");
	printIntArray(SC, result);

    return 0;
}
