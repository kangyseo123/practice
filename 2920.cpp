#include <stdio.h>

int main() {
    
    int notes[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", &notes[i]);
    }

    int isAscending = 1;
    int isDescending = 1;

    for (int i = 0; i < 7; i++) {
        if (notes[i] != notes[i + 1] - 1) {
            isAscending = 0;
        }
        if (notes[i] != notes[i + 1] + 1) {
            isDescending = 0;
        }
    }

    if (isAscending) {
        printf("ascending\n");
    }
    else if (isDescending) {
        printf("descending\n");
    }
    else {
        printf("mixed\n");
    }

    return 0;
}