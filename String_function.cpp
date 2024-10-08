#include <stdio.h>
#include <string.h>

int main() {
    char s1[10], s2[10];

    printf("Enter a string: ");
    scanf("%s", s1);

    strcpy(s2, s1); 
    strrev(s1);

    if (strcmp(s1, s2) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
