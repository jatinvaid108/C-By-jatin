#include <stdio.h>
int main() {
    char p[] = "Jatin";
    printf("%c\n", p[0]);
    printf("%s\n", p);
    p[0] = 'p'; // Don't use double quotes, use single quotes
    printf("%s\n", p);
}

// Length of string :--
#include <stdio.h>
int main() {
    char x[] = "Hello how are you! i am fine ";
    int len = 0;
    while (x[len] != '\0') { // Loop to find length of string
        len++;
    }
    printf("%d\n", len);
    printf("%d", len); // same as length
}

//Input the string and count all the vowels in the string :----
#include <stdio.h>
int main() {
    char x[] = "HELLO HOW ARE YOU! I AM FINE ";
    int n = 0;
    int count = 0;
    while (x[n] != '\0') {
        if (x[n] == 'a' || x[n] == 'e' || x[n] == 'i' || x[n] == 'o' || x[n] == 'u' ||
            x[n] == 'A' || x[n] == 'E' || x[n] == 'I' || x[n] == 'O' || x[n] == 'U') {
            count++;
        }
        n++;
    }
    printf("No. of vowels in your string is :- %d", count);
}

//Input a string all update all its even position to character 'a' considering 0 base indexing
#include <stdio.h>
int main() {
    char x[100];
    printf("Enter your string:\n");
    fgets(x, 100, stdin);
    int n = 0;
    while (x[n] != '\0') {
        if (n % 2 == 0) {
            x[n] = 'a';
        }
        n++;
    }
    printf("%s", x);
}
