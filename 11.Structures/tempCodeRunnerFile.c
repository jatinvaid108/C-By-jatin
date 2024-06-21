#include <stdio.h>
#include <ctype.h>
#include <string.h> 
int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input,100,stdin); // Read the entire line (including spaces)

    // Toggle the case of each character
    for (int i = 0; i<strlen(input); i++) {
        if (islower(input[i])) {
            input[i] = toupper(input[i]); // Convert lowercase to uppercase
        } else if (isupper(input[i])) {
            input[i] = tolower(input[i]); // Convert uppercase to lowercase
        }
    }

    printf("Toggled string: %s\n", input);
    return 0;
}