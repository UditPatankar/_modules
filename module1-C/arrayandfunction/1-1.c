// Write a C program that takes an array of integers as input and
// finds the smallest element using a function.

#include <stdio.h>
#define MAX 100

int findSmallest(int arr[], int n);

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
    
    int smallest = findSmallest(a, n);
    printf("%d", smallest);
    
    return 0;
}

int findSmallest(int arr[], int n) {
    int smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}