/*
 * <#src:b#>
 */

#include <stdio.h>

int main(void)
{
    int eng, math, sci;
    int *maxp;

    printf("数学(200点満点)? ");
    scanf("%d", &math);
    printf("理科(200点満点)? ");
    scanf("%d", &sci);
    printf("英語(100点満点)? ");
    scanf("%d", &eng);

    if (math > sci) {
	maxp = &math;
    } else {
	maxp = &sci;
    }
    /* 点数が高い方を 1.5 倍する */
    *maxp = *maxp * 1.5;
  
    printf("数学 %d 点, 理科 %d 点, 英語 %d 点\n",
	   math, sci, eng);
    printf("合計(600点満点) %d 点\n",
	   math + sci + eng);
    return 0;
}
