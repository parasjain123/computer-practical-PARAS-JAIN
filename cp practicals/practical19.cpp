#include <stdio.h>
#include <string.h>

void replaceString(char string[], char search[], char replace[]);

int main() {
    char string[100];
    char search[20];
    char replace[20];
    
    printf("Enter a line of text: ");
    scanf("%[^\n]s", string);
    
    printf("Enter the search string: ");
    scanf("%s", search);
    
    printf("Enter the replace string: ");
    scanf("%s", replace);
    
    replaceString(string, search, replace);
    
    printf("Result: %s\n", string);
    
    return 0;
}

void replaceString(char string[], char search[], char replace[]) {
    char tempString[100];
    int i, j, k;
    int searchLength = strlen(search);
    int replaceLength = strlen(replace);
    int stringLength = strlen(string);
    
    for (i = 0, j = 0; i < stringLength;) {
        for (k = 0; k < searchLength && i < stringLength && string[i] == search[k]; i++, k++);
        if (k == searchLength) {
            for (k = 0; k < replaceLength; k++) {
                tempString[j++] = replace[k];
            }
            i -= searchLength;
        } else {
            tempString[j++] = string[i++];
        }
    }
    tempString[j] = '\0';
    strcpy(string, tempString);
}
