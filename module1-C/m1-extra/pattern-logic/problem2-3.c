// pattern: equilateral triangle

#include <stdio.h>

int main() {

    int size;
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {

        for (int a = size-i; a >= 1; a--) {
            printf("  ");
        }
        for (int b = 1; b <= i; b++) {
            printf("* ");
        }
        for (int c = 2; c <= i; c++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}