/* ex1101ans.c */
#include <stdio.h>

int main(void)
{
    int a ,b, result1, result2;
    double c,d, result3, result4;

    printf("整数 a を入力してください：");
    scanf("%d", &a);
    printf("整数 b を入力してください：");
    scanf("%d", &b);
    printf("実数 c を入力してください：");
    scanf("%lf", &c);
    printf("実数 d を入力してください：");
    scanf("%lf", &d);
  
    result1 = a * b;
    result2 = a / b;
    result3 = a * c;
    result4 = c / d;
  
    printf("a * b = %d \n", result1);
    printf("a / b = %d \n", result2);
    printf("a * c = %f \n", result3);
    printf("c / d = %f \n", result4);

    return 0;
}
