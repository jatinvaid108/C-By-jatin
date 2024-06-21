#include <stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int num,fact;
    printf("ENter the number: \n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("The factorial of %d is %d :",num,fact);
}


// #include <stdio.h>
// int fibonacci(int n){
//     if(n<=1){
//         return n;
//     }
//     else{
//         return fibonacci(n-1)+fibonacci(n-2);
//     }
// }
// int main(){
//     int num;
//     printf("ENter the number: \n");
//     scanf("%d",&num);
//     for(int i=0;i<num;i++){
//         printf("%d ",fibonacci(i));
//     }
//     printf("\n");
// }

#include <stdio.h>
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d ",fibonacci(i));
    }
    // printf("\n");
}

