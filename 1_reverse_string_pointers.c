#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end) {
        // Swap characters using pointers
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
