// Linear Search using pointers

#include <stdio.h>
#define MAX 100

int main() {
    
    int n;
    int key;
    int arr[MAX];
    int *p = arr;

    scanf("%d", &n);
    
    if(n < 1 || n > MAX) {
        printf("Invalid size");
        return 1;
    }
    
    for(int i = 0; i < n; i++) 
        scanf("%d", p + i);
    
    scanf("%d", &key);

    // search
    for(int i = 0; i < n; i++) {
        if(*(p + i) == key) {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}