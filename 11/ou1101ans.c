/* ou1101ans.c */
#include <stdio.h>

/* 台形の上底a，下底b，高さh を整数で受け取り，実数で面積を返す関数 */
double trapezoid_area(int a, int b, int h)
{
/* 完成させなさい */
    return (a + b) * h / 2.0;
}

int main(void)
{
    int a, b, h;
    double s;

/* 完成させなさい */
    printf("台形の上底 a を入力してください：");
    scanf("%d", &a);
    printf("台形の下底 b を入力してください：");
    scanf("%d", &b);
    printf("台形の高さ h を入力してください：");
    scanf("%d", &h);

    s = trapezoid_area(a, b, h);
    printf("上底 %d, 下底 %d, 高さ %d の台形の面積は %f です．\n", a, b, h, s);

    return 0;
}
