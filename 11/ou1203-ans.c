/* ou1203.c */
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

/* na個 のデータが入っている集合に x と等しい要素があるかどうかを判定する  */
/* 等しい要素があればその添え字番号，なければ-1 を返す  */
int searchIntArray(int x, int a[], int na)
{
	int i;
	int found;
	found = 0;
	for (i = 0; i < na; i = i + 1) {
		if (a[i] == x) {
			return i;
		}
	}
	return -1;
}

int main(void)
{
	int data[10];
	int key;
	int index;
	
	readIntArray(data, 10);
	
	printf("探索する値を入力してください。");
	scanf("%d", &key);
	
	index = searchIntArray(key, data, 10);
	 
	if (index == -1 ){
		printf(" %d は存在しません．\n", key);
	}else{
		printf("data[%d] = %d \n", index, data[index]);
	}	

    return 0;
}
