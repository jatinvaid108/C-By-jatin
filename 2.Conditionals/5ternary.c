#include <stdio.h>

int main() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}

// Switch Statement
#include <stdio.h>
#include <math.h>
int main(){
    char op;
    scanf(" %c",&op);
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    switch(op){
        case '+': printf("%d",n1+n2);
        break;
        case '-': printf("%d",n1-n2);
        break;
        case '*': printf("%d",n1*n2);
        break;
        case '/': 
        if(n2!=0) printf("%.2lf",(double)n1/n2);
        else printf("cannot divide \n");
        break;
        case '^': printf("%d",(int)pow(n1,n2));
        break;
        default :printf("Invalid input");
    }
}
// #include <stdio.h>

// int main() {
//     int n1, n2;
//     char op;
    
//     printf("Enter n1: ");
//     scanf("%d", &n1);
    
//     printf("Enter an operator (+, -, *, /): ");
//     scanf(" %c", &op);  // Note the space before %c to consume any whitespace characters
    
//     printf("Enter n2: ");
//     scanf("%d", &n2);
    
//     if (op == '+') {
//         printf("Result: %d\n", n1 + n2);
//     } else if (op == '-') {
//         printf("Result: %d\n", n1 - n2);
//     } else if (op == '*') {
//         printf("Result: %d\n", n1 * n2);
//     } else if (op == '/') {
//         if (n2 != 0) {
//             printf("Result: %.2lf\n", (double)n1 / n2);  // Use %.2lf to print double with 2 decimal places
//         } else {
//             printf("Cannot divide by zero.\n");
//         }
//     } else {
//         printf("Invalid operator.\n");
//     }
    
//     return 0;
// }