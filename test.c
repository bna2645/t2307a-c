#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Nh?p 10 s?:\n");
    printf("================\n");

    for (i = 0; i < 10; i++) {
        printf("+ S? %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("K?t qu?: ");

    for (i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    return 0;
}