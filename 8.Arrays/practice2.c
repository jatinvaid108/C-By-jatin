#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter the a and b :  \n");
    scanf("% d %d ",&a,&b);
    printf("BEfore swapping %d %d \n",a,b);
    swap(&a,&b);
    printf("After swapping %d %d \n",a,b);
}
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    printf("The reverse of the number is: %d\n", reversedNum);

    return 0;
}

