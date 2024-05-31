#include <stdio.h>
void printstring(char arr[]){
    for(int i=0;arr[i] !='\0';i++){    //You need to create loop till arr[i]!=0  ; Index ka dyan rakho !!
        printf("%c",arr[i]);
    };
    printf("\n");
}
int main(){
    char firstname[]="Jatin ";
    char lastname[]="Vaid ";
    printstring(firstname);
    printstring(lastname);
    return 0;
}

// String format Specifier  %s
#include <stdio.h>
int main(){
    char name[40];
    printf("ENter you name \n");
    scanf("%s",name);   //we will not use & 
    printf("Your name is: %s",name);
}

// Scanf cannot inout multi word string

#include <stdio.h>
int main(){
    char str[100];
    printf("ENter your string: ");
    fgets(str,100,stdin);
    puts(str);   //The puts() function then prints the entered string followed by a newline character.

}