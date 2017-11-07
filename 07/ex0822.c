#include <stdio.h>

/* (2,2)型行列Aの
   (1,1)成分 a，(1,2)成分 b，(2,1)成分 c，(2,2)成分 d，
   が引数として与えられたときに，行列 A が逆行列を持つならば 1 を，
   持たないならば -1 を返す関数 */
int has_inverse(int a, int b, int c, int d)
{
    /* 完成させなさい */
    if((a*d-b*c)!=0){
      return 1;
    }else{
      return -1;
    }

}

/* --------- 以降は変更しないこと ------------------------------- */

int main(void)
{
    int a, b, c, d, result;

    printf("(1,1)成分を入力してください：");
    scanf("%d",&a);
    printf("(1,2)成分を入力してください：");
    scanf("%d",&b);
    printf("(2,1)成分を入力してください：");
    scanf("%d",&c);
    printf("(2,2)成分を入力してください：");
    scanf("%d",&d);
    result = has_inverse(a,b,c,d);
    printf("　　 |%2d  %2d|\n",a,b);
    printf("行列");
    printf(" |%2d  %2d|",c,d);
    printf(" は逆行列を");
    if (result == 1) {
        printf("持つ．\n");
    } else {
        printf("持たない．\n");
    }

    return 0;
}
