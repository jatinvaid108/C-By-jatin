//Find the salted form of password entered by user if the salt is "123" & added at the end.
#include <stdio.h>
#include <string.h>
void salting(char password[]){
    char salt[]="123";
    char new_pass[200];
    strcpy(new_pass,password);
    strcat(new_pass,salt);
    puts(new_pass);
}
int main(){
    char password[100];
    printf("Enter the password \n");
    // fgets(password,100,stdin);
    scanf("%s",password);
    salting(password);
}

//Write a function named slice,which takes a string & returns a sliced string from index n to m .
#include <stdio.h> 
#include <string.h> 
void slice(char str[],int n,int m){
    char newstr[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
int main(){
    int n=3,m=6;
    char str[100];
    printf("Enter the string \n");
    // scanf("%s",str);
    fgets(str,100,stdin);
    slice(str,n,m);
}

//WAP to count number of vowels:-
// #include <stdio.h> 
// #include <string.h>
// int vowels(char str[100]){
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='a' ||str[i]=='e'||str[i]=='o'||str[i]=='u'){
//             count++;
//         }
//     }
//     return count;
//     // printf("%d",count);
// }
// int main(){
//     char str[100];
//     printf("Enter the string \n");
//     scanf("%s",str);
//     int count = vowels(str);  // Call the vowels function and store the result
//     printf("Number of vowels: %d\n", count);  // Print the result
// }

//Check if given chararcter is present in a string or not 

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf('Enter the string \n');
    fgets(str,100,stdin);
    char str2[2];
    printf("Enter the character you want to search \n");
    scanf("%c",str2);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==str2) printf("Yes");
        else "No";
    }

}
