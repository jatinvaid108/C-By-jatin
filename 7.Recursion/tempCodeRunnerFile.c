#include <stdio.h>
int main(){
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        printf("%d ",i);
    }
    printf("\n");
}