#include <stdio.h>

int main() {
    int m, n, i, j, count = 0;

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
if(m==n)
{
    int c[n];
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("adding of two array : %d\t",c[i]);
    }
}
else{
    printf("adding is not possible");
}
    

    return 0;
}