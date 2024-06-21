#include <stdio.h>
int main() {
    char arr[6] = {'j', 'a', 't', 'i', 'n', '\0'}; // Including null terminator
    for (int i = 0; i < 5; i++) {
        printf("%c", arr[i]);
    }
    // printf("\n");
}

// Strings are type of char arrays :----------
// To solve this let's use strings;

#include <stdio.h>
int main() {
    char x[] = "Jatin is a coder!"; // Direct Initialization
    printf("%s", x);
}

// Input :--

#include <stdio.h>
int main() {
    char x[100];
    printf("Enter your string :-\n");
    fgets(x, 100, stdin); // Using fgets for input
    printf("%s", x);
}
