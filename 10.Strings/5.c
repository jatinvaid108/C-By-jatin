#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "raghav";
    printf("%s\n", s);
    int n = strlen(s);
    int i = 0;         // Start reversing from here
    int j = n / 2 - 1; // Reverse up to here
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", s);
}

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "raghav";
    printf("%s\n", s);
    int n = strlen(s);
    // reverse(s + 0, s + 3);   // +3,+4 will reverse those many characters
    reverse(s, s + n / 2);
    printf("%s\n", s);
}

#include <stdio.h>
#include <string.h>

int main() {
    char p[100];
    printf("Enter the string you would like to input\n");
    fgets(p, 100, stdin);
    int n = strlen(p);
    reverse(p + 1, p + 5);
    printf("%s\n", p);
}

