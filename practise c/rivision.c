#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];  // Assuming the input string is no longer than 100 characters
    char reversedString[100];
    
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    
    // Remove the newline character from the input string
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }
    
    int length = strlen(inputString);
    
    // Reverse the string
    for (int i = 0; i < length; i++) {
        reversedString[i] = inputString[length - i - 1];
    }
    reversedString[length] = '\0';
    
    printf("Reversed string: %s\n", reversedString);
    
    return 0;
}
