//Factorial of a number........

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
    int num;
    printf("enter the number : \n");
    scanf("%d",&num);
    int fact=factorial(num);
    printf("Factorial of %d is %d ",num,fact);
    return 0;
}
//Fibonacci series using functions 

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    printf("Fibonacci Series up to %d terms: \n", num);
    
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}


// five digit positive is entered through the keyboard .Recursive func to calculate the sum of 5 digit number 
#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        int last_digit = n % 10;
        n = n / 10;
        return last_digit + sum(n);
    }
}
int main() {
    printf("Enter a five-digit positive number: ");
    int num;
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Please enter a valid five-digit positive number.\n");
        return 0;
    }

    printf("The sum of digits of %d is: %d\n", num, sum(num));
    return 0;
}
// prime factors of number using recursion 