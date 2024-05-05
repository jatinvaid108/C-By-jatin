#include <stdio.h>
#include <stdlib.h> // For itoa

int main() {
    int x = 45673;
    char buffer[20]; // Buffer to hold converted string
    sprintf(buffer, "%d", x); // Convert integer to string
    printf("%s  Jatin ji \n", buffer); // Concatenate string
}

#include <stdio.h>
#include <stdlib.h> // For itoa

int main() {
    int x = 45673;
    char buffer[20]; // Buffer to hold converted string
    sprintf(buffer, "%d", x); // Convert integer to string
    int n = 0;
    while (buffer[n] != '\0') { // Calculate length of string
        n++;
    }
    printf("%d", n);
}

#include <stdio.h>
#include <stdlib.h> // For atoi

int main() {
    char s[] = "647484";
    int x = atoi(s); // Convert string to integer
    printf("%d\n", x);
}
