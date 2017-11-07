/* ou1201.c */
#include <stdio.h>

/* fib(n) を計算する関数 */
int fib(int n)
{
	int f[47]; /* n < 47 とする． */
	int i;
	f[0] = 0;
	f[1] = 1;
	for (i = 2; i <= n; i = i + 1) {
		f[i] = f[i-1] + f[i-2];
	}
	return f[n];
}



int main(void)
{
	int i;
	for(i=0; i<30; i=i+1){
		printf("fib[%2d]= %8d\n", i, fib(i));
	}
	return 0;
}
