#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isStrongNumber(number)) {
        printf("%d is a Strong Number.\n", number);
    } else {
        printf("%d is not a Strong Number.\n", number);
    }

    return 0;
}

