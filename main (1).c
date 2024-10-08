#include <stdio.h>

int main() {
    int m, n, i, j, count = 0, unmutual;

    printf("Enter the size of array a: ");
    scanf("%d", &m);

    int a[m];
    printf("Enter the elements of array a:\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of array b: ");
    scanf("%d", &n);

    int b[n];
    printf("Enter the elements of array b:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(a[i] == b[j]) {
                count++;
                break;
            }
        }
    }

    unmutual = (n-count)+(m-count);
    printf("Number of matched elements: %d\n", count);

    printf("Number of unmatched elements: %d\n", unmutual);

    return 0;
}