/* ou1103ans.c */
#include <stdio.h>

/* 引数として与えられた身長，体重に対する標準体重，メッセージを出力する手続き print_nw2 */
void print_nw2(double height, double weight)
{
/* 完成させなさい */
    double normal_weight;

    normal_weight = (height - 100) * 0.9;

    printf("身長 %.1f cm, 体重 %.1f kg\n", height, weight);
    printf("標準体重 = %.1f kg\n", normal_weight);

    if( normal_weight * 0.9 >= weight) {
        printf("やせすぎです．\n");
    } else if( normal_weight * 1.1 <= weight) {
        printf("太りすぎです．\n");
    } else {
        printf("標準です．\n");
    }
}
/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    double h, w;

    printf("身長 (cm)：");
    scanf("%lf", &h);
    printf("体重 (kg)：");
    scanf("%lf", &w);

    print_nw2(h, w);
  
    return 0;
}
