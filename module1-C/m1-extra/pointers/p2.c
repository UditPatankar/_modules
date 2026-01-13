// Traverse array using pointers ONLY

#include <stdio.h>
#define MAX 100

int main() {
    
    int n;
    int arr[MAX];
    int *p = arr;

    scanf("%d", &n);

    if(n < 1 || n > MAX) {
        printf("Invalid size");
        return 0;
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}