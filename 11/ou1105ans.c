/* ou1105ans.c */
#include <stdio.h>

/* 身長、体重を受け取り、BMIを計算して肥満度と適正体重を表示する手続き print_bmi */
void print_bmi(double height, double weight)
{
/* 完成させなさい */
    double bmi, normal_weight;

    bmi = weight * 10000.0 / (height * height);

    printf("身長 %.1f cm, 体重 %.1f kg\n", height, weight);
    printf("BMI = %.1f\n", bmi);

    printf("肥満度：");
    if (bmi < 18.5) {
        printf("低体重です．\n");
    } else if (bmi < 25.0) {
        printf("標準体重です．\n");
    } else if (bmi < 30.0) {
        printf("肥満1度です．\n");
    } else if (bmi < 35.0) {
        printf("肥満2度です．\n");
    } else if (bmi < 40.0) {
        printf("肥満3度です．\n");
    } else {
        printf("肥満4度です．\n");
    }

    normal_weight =(height * height * 22.0) / 10000.0;
    printf("適正体重は %.1f kg です．\n", normal_weight);
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    double h, w;

    printf("身長 (cm)：");
    scanf("%lf", &h);
    printf("体重 (kg)：");
    scanf("%lf", &w);

    print_bmi(h, w);
  
    return 0;
}
