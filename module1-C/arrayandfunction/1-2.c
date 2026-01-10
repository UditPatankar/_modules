// Write a C program that takes an array of integers as input and
// reverses it using a function.

#include <stdio.h>
#define MAX 100

void reverse(int arr[], int n);

int main() {
    
    int n;
    int a[MAX];
    scanf("%d", &n);
    
    if(n < 1 || n > MAX) {
        printf("Invalid input");
        return 0;
    }

    for(int i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    reverse(a, n);
    
    for(int i = 0; i < n; i++) 
        printf("%d ", a[i]);

    return 0;
}

void reverse(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[(n-1) - i];
        arr[(n-1) - i] = temp;
    }
}