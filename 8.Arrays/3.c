// #include <stdio.h>
// int main(){
//     int num,first_num=0,sec_num=1,next=0;
//     printf("Enter the number : \n");
//     scanf("%d",&num);
//     if(num == 0){
//         printf("Fibonacci number for 0 is 0\n");
//     } else if(num == 1){
//         printf("Fibonacci number for 1 is 1\n");
//     } else {
//         for(int i=0;i<num-2;i++){
//             next=first_num+sec_num;
//             first_num=sec_num;
//             sec_num=next;
//         }
//         printf("The fibonacci number is %d ",next);
//     }
// }

// #include <stdio.h>
// int main(){
//     int i,j;
//     int arr[3][3];
//     printf("MAke the matrix : \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("The Matrix is : \n ");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The transpose of the Matrix is : \n");
//     printf("The Matrix is : \n ");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",arr[j][i]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
#include <math.h>
int main() {
    int n, len = 0, num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int temp = n;
    
    // Calculate the number of digits in the input number
    while (temp != 0) {
        len++;
        temp /= 10;
    }
    
    temp = n;
    
    // Calculate the sum of each digit raised to the power of len
    while (temp != 0) {
        int remainder = temp % 10;
        num += pow(remainder, len);
        temp /= 10;
    }
    
    if (num == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    
    return 0;
}

