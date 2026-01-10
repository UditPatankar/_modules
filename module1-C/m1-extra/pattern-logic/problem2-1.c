// Print basic star patterns
 // square

#include <stdio.h>

int main() {

    int size;
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {

        for (int j = 1; j <= size; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}