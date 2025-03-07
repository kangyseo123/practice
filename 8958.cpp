#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[80];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        int sum = 0;
        int cnt = 0;

        for (int j = 0; j < strlen(s); j++) {
            if (s[j] == 'O') {
                cnt++;
                sum += cnt;
            }
            else {
                cnt = 0;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}