#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int vowels = 0, consonants = 0, digits = 0;
    int i;
    
    printf("Enter a line of string: ");
    scanf("%[^\n]s", string);
    
    for (i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
                string[i] == 'o' || string[i] == 'u' || string[i] == 'A' ||
                string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||
                string[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(string[i])) {
            digits++;
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    
    return 0;
}
