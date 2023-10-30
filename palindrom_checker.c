#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int isPalindrome = 1; // Assuming the string is a palindrome initially

    // Input a string from the user
    printf("Enter a string: ");
    gets(str);

    // Check if the string is a palindrome
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
