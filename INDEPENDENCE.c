#include <stdio.h>

int findMax(int x, int y, int z) {
    if (x > y && x > z) return x;
    if (y > x && y > z) return y;
    return z;
}

int main() {
    int numTests;
    scanf("%d", & numTests);

    while (numTests--) {
        int red, green, blue;
        scanf("%d %d %d", & red, & green, & blue);

        int maxColor = findMax(red, green, blue);
        int sumColors = red + green + blue;

        if (maxColor <= (sumColors + 1) / 2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}