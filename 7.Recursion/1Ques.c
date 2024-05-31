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

// Now, let's see how recursion unfolds when you call factorial(n):

// Suppose you call factorial(5).
// Since 5 is not 1, it goes to the else block.
// It returns 5 * factorial(4).
// To evaluate factorial(4), it repeats the process.
// It returns 4 * factorial(3).
// This continues until it reaches factorial(1), which returns 1.
// Then, it starts returning back the results and evaluating the multiplication along the way.
// Finally, you get the result of 5 * 4 * 3 * 2 * 1, which is 120, the factorial of 5.



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


// We start with fibonacci(4).
// According to the function definition, since n (which is 4 in this case) is greater than 1, it will calculate fibonacci(3) and fibonacci(2) to get the Fibonacci number at position 4.
// For fibonacci(3), it goes into the function again:
// fibonacci(3) requires fibonacci(2) and fibonacci(1) to be calculated.
// For fibonacci(2), it goes into the function again:
// fibonacci(2) requires fibonacci(1) and fibonacci(0) to be calculated.
// Now, fibonacci(1) returns 1, and fibonacci(0) returns 0. These are the base cases.
// So, fibonacci(2) is calculated as fibonacci(1) + fibonacci(0), which equals 1.
// Then, fibonacci(3) is calculated as fibonacci(2) + fibonacci(1), which equals 2.
// Now, we go back to the calculation of fibonacci(4):
// fibonacci(4) is calculated as fibonacci(3) + fibonacci(2).
// fibonacci(3) is already calculated as 2.
// fibonacci(2) is already calculated as 1.
// So, fibonacci(4) is 2 + 1, which equals 3.



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