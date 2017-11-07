/* ou1104ans.c */
#include <stdio.h>

/* 引数として与えられた身長，体重に対する標準体重，メッセージを出力する手続き print_nw3 */
void print_nw3(double height, double weight)
{
/* 完成させなさい */
    double normal_weight;
    double percent;

    normal_weight = (height - 100) * 0.9;

    printf("身長 %.1f cm, 体重 %.1f kg\n", height, weight);
    printf("標準体重 = %.1f kg\n", normal_weight);

    percent = weight * 100 / normal_weight;
    printf("現在の体重は標準体重の %.1f ％です。\n", percent);
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    double h, w;

    printf("身長 (cm)：");
    scanf("%lf", &h);
    printf("体重 (kg)：");
    scanf("%lf", &w);

    print_nw3(h, w);
  
    return 0;
}
