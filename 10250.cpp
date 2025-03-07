#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor_number = (N % H == 0) ? H : N % H;
        int room_number = (N % H == 0) ? (N / H) : (N / H + 1);

        printf("%d\n", 100 * floor_number + room_number);
    }

    return 0;
}