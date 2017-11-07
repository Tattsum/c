/* ou1102ans.c */
#include <stdio.h>

/* 円の半径 r を実数で受け取り，円周と円の面積を表示する手続き */
void print_circle(double r)
{
    double pi, edge, area; /* π, 円周, 面積 */
    pi = 3.14159265358979;

    edge = 2.0 * pi * r;
    area = pi * r * r;
    printf("半径 %f の円周の長さは %f です．\n", r, edge);
    printf("半径 %f の円の面積は %f です．\n", r, area);
}

int main(void)
{
    double r;

/* 完成させなさい */
    printf("円の半径 r を入力してください：");
    scanf("%lf", &r);

    print_circle(r);

    return 0;
}
