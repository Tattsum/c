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

/* size個 のデータが入っている配列を 配列の最後尾から順に出力する */
void printReverse(int a[], int size)
{
    int i;
    for (i = size-1; i >= 0; i = i-1) {
        printf("%d ", a[i]);
    }
    printf("\n");
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

int main(void)
{
    int data[5];
    readIntArray(data, 5);
    printf("順番に出力:");
    printIntArray(data, 5);
    printf("逆順に出力:");
    printReverse(data, 5);
    return 0;
}
