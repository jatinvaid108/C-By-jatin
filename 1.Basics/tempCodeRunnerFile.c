
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);  // Taking input of an integer
    char ch = (char)x;  // Typecasting integer to char
    printf("%c\n", ch);  // Printing the character
    return 0;
}