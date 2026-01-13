// Reverse array using pointers ONLY

#include <stdio.h>
#define MAX 100

int main() {
    
    int n;
    int arr[MAX];
    int *p = arr;

    scanf("%d", &n);
    
    if(n < 1 || n > MAX)
        return 1;
    
    for(int i = 0; i < n; i++)
            scanf("%d", p + i);

    for(int i = 0; i < n/2; i++) {
        int temp = *(p + i);
        *(p + i) = *(p + ((n-1) - i));
        *(p + ((n-1) - i)) = temp;
    }
    
    for(int i = 0; i < n; i++)
            printf("%d ", *(p + i));
    
    return 0;
}