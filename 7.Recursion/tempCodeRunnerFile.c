#include <stdio.h>
int fibo(int num){
    if(num<=1){
        return num;
    }
    else{
        return fibo(num-1)+fibo(num-2);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d ",fibo(i));
    }
}