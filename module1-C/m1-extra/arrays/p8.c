// Find second largest element

#include <stdio.h>
#include <limits.h>
#define MAX 100

int main() {

    int n;
    int a[MAX];
    int max, max2;

    scanf("%d", &n);

    if(n > MAX || n < 2) {
        printf("Invalid input");
        return 1;
    }

    for(int i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    max = INT_MIN;
    max2 = INT_MIN;
    
    for(int i = 0; i < n; i++) {

        if(a[i] > max) {
            max2 = max;
            max = a[i];
        }
        else if(a[i] < max && a[i] > max2) {
            max2 = a[i];
        }
    }

    if(max2 == INT_MIN) {
        printf("none");
        return 0;
    }
    else 
        printf("second max: %d", max2);

    return 0;
}