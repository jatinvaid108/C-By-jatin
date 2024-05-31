// #include <stdio.h>
// int main(){
//     int arr[6];
//     printf("Enter the array: \n");
//     for(int i=0;i<6;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<6;i++){
//         if(arr[i]%2==0){
//             arr[i]=arr[i]*10;
//         }
//         else{
//             arr[i]=arr[i]*2;
//         }
//     }
//     for(int i=0;i<6;i++){
//         printf("%d ",arr[i]);
//     }
// }


#include <stdio.h>
int main(){
    int num;
    printf("Enter the size of the array : \n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the array\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]%2==0) arr[i]+=10;
        else {
            arr[i] *= 2;   // If the number is odd, multiply by 2
        }
    }
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}



