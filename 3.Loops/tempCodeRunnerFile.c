#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int last_digit,original_sum=num,reverse=0;
    while(num>0){
        last_digit=num%10;
        reverse=reverse*10;
        reverse=reverse+last_digit;
        num=num/10;
    }
    original_sum+=reverse;
    printf("The reverse of %d is and its sum is %d ",reverse,original_sum);
}