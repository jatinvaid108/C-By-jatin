#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Reversed array: \n");
    for(int i=n-1;i>=0;i--){            //With this you won't be able to print the reverse of a negative array so follow swapping method 
        printf("%d ",arr[i]);
    }
}

// WAP to copy the content of one array into another array in reverse order.

#include <stdio.h>
int main(){
    int arr[]={2,8,7,6,5,4,33,22,12,56};
    int n=sizeof(arr)/4;
    int i,j;
    int arr2[n];
    for(int i=0;i<n;i++){
        j=n-1-i;
        arr2[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
}

//Wap To revrse the array without using any extra array 
// Lets use swapping 1st ele ko last ele k saath swap karna hai 
#include <stdio.h>
int main(){
    int arr[]={2,8,7,6,5,4,33,22,12,56};
    int n=sizeof(arr)/4;
    int i=0;
    int j=n-1;
    while(i<j){                          // PLz see while loop when i=j hoga then loop rukega swapping rukegi 
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);   
    }
}


