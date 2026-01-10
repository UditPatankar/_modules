// pattern: diamond(rombus)

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

        for (int c = 1; c < i; c++) {
            printf("* ");
        }

        printf("\n");
    }

    // reverse-----------

    for (int i = size-1; i >= 1; i--) {

        for (int a = size-i; a >= 1; a--) {
            printf("  ");
        }

        for (int c = i; c >= 2; c--) {
            printf("* ");
        }

         for (int b = 1; b <= i; b++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}