#include <stdio.h>
int main(){
    int a,b,c;
    printf("ENter the number and the limit:  \n");
    scanf("%d %d ",&a,&b);
    for(int i=1;i<=b;i++){
        c=a*i;
    }
    printf("%d",c);
}