#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Jatin";
    printf("%s\n", a);
    strcat(a, " Vaid");
    printf("%s\n", a);
    printf("%zu\n", strlen(a));
}    // Better Method of Append i.e + operator is discussed in 4.cpp

#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Jatin";
    printf("%zu\n", strlen(a));
    a[0] = '\0';    // Will remove the whole string
    printf("%zu\n", strlen(a));
    printf("%s\n", a);
}
