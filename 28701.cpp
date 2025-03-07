#include<stdio.h>

int main() {

	int n;
	int sum1 = 0;
	int sum2 = 0;

	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
		sum1 += i;
	
	for (int i = 1; i <= n; i++)
		sum2 += i * i * i;

	printf("%d\n", sum1);
	printf("%d\n", sum1 * sum1);
	printf("%d\n", sum2);

	return 0;

}