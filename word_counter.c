#include <stdio.h>
#include <ctype.h>
#include <string.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str != '\0') {
        if (!isspace((unsigned char)*str) && *str != '\n' && *str != '\t') {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
        str++; // Pointer traversal
    }

    return count;
}

int countCharacters(const char *str) {
    int chars = 0;
    while (*str != '\0') {
        if (*str != '\n') {
            chars++;
        }
        str++;
    }
    return chars;
}

int main() {
    char text[500];

    printf("==========================================\n");
    printf("       WORD COUNTER MINI PROJECT          \n");
    printf("==========================================\n");
    printf("Enter a sentence or paragraph:\n");

    fgets(text, sizeof(text), stdin);

    int totalWords = countWords(text);
    int totalChars = countCharacters(text);

    printf("\n------------------------------------------\n");
    printf("               RESULTS                    \n");
    printf("------------------------------------------\n");
    printf("Total Words      : %d\n", totalWords);
    printf("Total Characters : %d\n", totalChars);
    printf("==========================================\n");

    return 0;
}
