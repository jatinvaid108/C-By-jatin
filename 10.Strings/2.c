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
#include <string.h>
int main() {
    char x[] = "HELLO HOW ARE YOU! I AM FINE ";
    int n =strlen(x);
    int count = 0;
    for(int i=0;i<n;i++) {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' ||
            x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U') {
            count++;
        }
    }
    printf("No. of vowels in your string is :- %d", count);
}

//Input a string all update all its even position to character 'a' considering 0 base indexing
#include <stdio.h>
int main() {
    char sen[100];
    printf("Enter your string:\n");
    fgets(sen, 100, stdin);
    int n = strlen(sen);
    for(int i=0;i<n;i++) {
        if (i % 2 == 0) {
            sen[i] = 'a';
        }
    }
    printf("%s", sen);
}
