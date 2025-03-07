#include <stdio.h>
#include <math.h> 

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    int res1 = A + B - C;

    int temp = B, digits = 0;

    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    int AB = A * pow(10, digits) + B;
    int res2 = AB - C;

    printf("%d\n", res1);
    printf("%d\n", res2);

    return 0;
}