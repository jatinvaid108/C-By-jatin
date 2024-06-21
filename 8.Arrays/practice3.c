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


#include <stdio.h>
int main()
{
    int arr[100], num, temp;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num-1; i++)
    {
        for (int j = 0; j < num-i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}


#include <stdio.h>
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   printf("Before swapping: %d %d\n",a,b);
   int temp=a;
   a=b;
   b=temp;
   printf("After Swapping: %d %d\n",a,b);
}

//Reverse of array using the swapping method
#include <stdio.h>
int main(){
    int arr[100];
    int num,i,j;
    scanf("%d",&num);
    i=0;
    j=num-1;
    printf("Enter the ele: \n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
} 


