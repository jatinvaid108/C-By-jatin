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

//Input the string of even length and reverse the first half of the string 
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    if(len%2==0) printf("The length of the string is not even\n");
    return 1;
    
}