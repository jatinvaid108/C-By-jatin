
#include <stdio.h>
int main(){
    int n;
    printf("Enter the num \n");
    scanf("%d",&n);
    int last_digit,even_sum=0,odd_sum=0 ;
    for(int i=0;i<=n;i++){
        last_digit=n%10;
        if(last_digit%2==0) even_sum+=last_digit;
        else if(last_digit%2!=0) odd_sum+=last_digit; 
        n=n/10;
    }
    printf("even sum: %d\n",even_sum);
    printf("odd sum: %d\n",odd_sum);
}