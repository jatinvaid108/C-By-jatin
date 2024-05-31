#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="You Don't need GF";
    char str2[]="You need GF";
    strcpy(str2,str1);  //Will copy the value of str1 to str 2
    puts(str2);      // Youu are printing the value of str 2 but it is printing the value of str 1
}

//String concatenation:
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100]="Hello "; // You need to specify size here Kyuki tumne str2 concatenate krni hai therefore length honi chahiye 
    char str2[]="World";
    strcat(str1,str2); // Will concatenate the content to str2 to str1
    puts(str1);
}

// comparsion
// strcpm(first,second)  will return integer value 
// 0 if first=second(ASCII)
// 1 if first>second(ASCII)
// -1 if first<second(ASCII)


#include <stdio.h>
#include <string.h>
int main(){
    char first[]="Banana";   //Banana has more ASCII VALUE B>A
    char second[]="Apple";
    printf("%d",strcmp(first,second));
}


#include <stdio.h>
#include <string.h>
int main(){
    char first[]="Apple";    
    char second[]="Banana";
    printf("%d",strcmp(first,second));
}
