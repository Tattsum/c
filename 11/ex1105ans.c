#include <stdio.h>

/* 関数 is_approx の定義を記述する */
int is_approx(double x, double y)
{
  if (-0.1 < x - y && x - y < 0.1) {
      return 1;
  }

  return 0;
}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int flag;
    double a, b;

    a = 5.32;
    b = 5.29;

    flag = is_approx(a, b);
    printf("is_approx(%.3f, %.3f) = %d\n", a, b, flag);

    b = b + 0.07;
    flag = is_approx(a, b);
    printf("is_approx(%.3f, %.3f) = %d\n", a, b, flag);

    b = b + 0.07;
    flag = is_approx(a, b);
    printf("is_approx(%.3f, %.3f) = %d\n", a, b, flag);

    return 0;
}
