#include <stdio.h>
#include <ctype.h>

void countVowelsConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    while (*str != '\0') {
        char ch = tolower(*str);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countVowelsConsonants(str, &vowels, &consonants);

    printf("\n--- Results ---\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
