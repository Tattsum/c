/*
 * <#src:b#>
 */

#include <stdio.h>

void readDoubleArray(double a[], int size)
{
    int i;

    for (i = 0; i < size; i = i+1) {
	printf("%d番目? ", i+1);
	scanf("%lf", &a[i]);
    }
}

void printDoubleArray(double a[], int size)
{
    int i;

    for (i = 0; i < size; i = i + 1) {
	printf("%f ", a[i]);
    }
    printf("\n");
}


void sum_ave_double_array(double a[], int size, double *sum, double *ave)
{
  int i;

  *sum = 0;
  for (i = 0; i < size; i = i + 1) {
    *sum = *sum + a[i];
  }
  *ave = *sum / size;

}

int main(void)
{
  double a[100], sum, ave;
  int num;

  printf("データ数? ");
  scanf("%d", &num);

  readDoubleArray(a, num);
  printDoubleArray(a, num);
  
  sum_ave_double_array(a, num, &sum, &ave);
  printf("合計: %f, 平均: %f\n", sum, ave);

  return 0;
}

