#include <stdio.h>

int main() {
    int n, k, i, j, count = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter the elements to insert to the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("k value: ");
    scanf("%d", &k);
    
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            count++;
            if(count == k) {
                printf("The %d-th maximum odd number is %d\n", k, a[i]);
                return 0;
            }
        }
    }
    
    
    return 0;
}
