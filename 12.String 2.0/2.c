// string using poiters 

#include <stdio.h>
int main(){
    // char cannotchange[]="Hello World";
    // puts(cannotchange);
    // cannotchange="Hello ";   // Will give error char array cannot be modified

    char *canchange="Hello World";
    puts(canchange);
    canchange="Hello";
    puts(canchange);     //But with help of pointers you can chnage  
}

// Make a program that inputs user name and its lenghth

#include <stdio.h>
#include <string.h>
int main(){
    char name[100]="Jatin";
    int len=strlen(name);
    printf("The name of the user is %s and length of his name is %d ",name,len);
} 
// 2nd method
#include <stdio.h>
#include <string.h>
int main(){
    char name[100]="Jatin";
    printf("ENter your name \n");
    fgets(name,100,stdin);  //But fgets calculates null character
    // Remove the newline character from the input
    name[strcspn(name, "\n")] = '\0';
    int len=strlen(name);
    printf("The name of the user is %s and length of his name is %d ",name,len);
} 

//3rd method
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your name: \n");
    fgets(name, 100, stdin);

    // Remove the newline character if it's present
    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;  // Adjust the length after removing the newline character
    }

    printf("The name of the user is %s and the length of their name is %d\n", name, len);
    return 0;
}
