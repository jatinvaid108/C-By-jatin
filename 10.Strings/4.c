#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Jatin";
    printf("%s\n", a);
    strcat(a, " Vaid");
    printf("%s\n", a);
}

// Reverse of a string :--
#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Jatin";
    printf("%s\n", a);
    int n = strlen(a);
    int i = 0;
    int j = n - 1;
    while (i < j) {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", a);
}

// Smart method, Better Method
#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "Jatin is a coder";
    printf("%s\n", a);
    int n = strlen(a);
    for (int i = 0; i < n / 2; i++) {
        char temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("%s\n", a);
}
