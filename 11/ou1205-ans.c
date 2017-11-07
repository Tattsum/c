/* ou1205.c */

#include <stdio.h>

void printIntArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i = i + 1) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

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

int complement(int a[], int na, int u[], int nu, int c[])
{
    int i, j;
    j = 0;
    for (i = 0; i < nu; i = i + 1) {
        if (!memberOf(u[i], a, na)) {
            c[j] = u[i];
            j = j + 1;
        }
    }
    return j;
}

int main(void)
{
  int dataU[20]= { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};/* 全体集合 U を表現 */
  int dataA[20]= { 1, 3, 5, 7, 9};
  int dataB[20]= { 1, 2, 3, 4, 5};
  int dataC[20]= { 0, 2, 4, 6, 8};
  int dataD[20];   /* dataDと sizeD は Aの補集合 を管理*/
  int dataE[20];   /* dataEと sizeE は Bの補集合 を管理*/
  int dataF[20];   /* dataFと sizeF は Cの補集合 を管理*/
  int sizeU = 10;
  int sizeA = 5;
  int sizeB = 5;
  int sizeC = 5;
  int sizeD = 5;
  int sizeE = 5;
  int sizeF = 5;
  
  printf("全体集合 U：");
  printIntArray(dataU, sizeU);
  printf("集合 A：");
  printIntArray(dataA, sizeA);
  printf("集合 B：");
  printIntArray(dataB, sizeB);
  printf("集合 C：");
  printIntArray(dataC, sizeC);
  
  sizeD = complement(dataA, sizeA, dataU, sizeU, dataD);
  printf("A の補集合：");
  printIntArray(dataD, sizeD);

  sizeE = complement(dataB, sizeB, dataU, sizeU, dataE);
  printf("B の補集合：");
  printIntArray(dataE, sizeE);

  sizeF = complement(dataC, sizeC, dataU, sizeU, dataF);
  printf("C の補集合：");
  printIntArray(dataF, sizeF);

  return 0;
}
