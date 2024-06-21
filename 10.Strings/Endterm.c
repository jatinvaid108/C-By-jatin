#include <stdio.h>
#include <string.h>
int main(){
    printf("Enter the string : \n");
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    int alpha=0,integer=0,special=0;
    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') alpha++;
        else if(str[i]>='1' && str[i]<='9') integer++;
        else if (str[i]!= ' ' && str[i]!='\n')special++;
    }
    printf("No. of alphabets: %d\n",alpha);
    printf("No. of Ddigits: %d\n",integer);
    printf("No. of special Characters: %d\n",special);
}
//Byankar Frequency Counter 
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int freq[26]={0};
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z') freq[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0) printf(" %c=%d\n",'a'+i,freq[i]);
    }
}

//ASCII Values
#include <stdio.h>

int main() {
    char chr;
    scanf("%c", &chr);

    if (chr >= 65 && chr <= 90) {
        printf("Capital letter");
    } else if (chr >= 97 && chr <= 122) {
        printf("Small letter");
    } else if (chr >= 48 && chr <= 57) {
        printf("Digit");
    } else {
        printf("Special character");
    }

    return 0;
}


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
