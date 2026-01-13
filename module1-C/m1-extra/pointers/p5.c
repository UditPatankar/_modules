// Pass array to function using pointer
#include <stdio.h>
#define MAX 100
 
void printArray(int *p, int n) {
    for(int i = 0; i < n; i++) 
        printf("%d ", *(p + i));
}
 
int main() {

    int n;
    int arr[MAX];
    int *p = arr;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) 
        scanf("%d", p + i);

    printArray(p, n);

    return 0;
}