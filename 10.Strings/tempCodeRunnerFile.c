#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    int i=0,j=len-1;
    while(i<j){
       char temp=str[i];
       str[i]=str[j];
       str[j]=temp;
    }
    printf("%s",str);
}