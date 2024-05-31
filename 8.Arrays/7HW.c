//Find the differnece between the sum of elements at even indexes and sum of elements at odd indexes

#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int arr[n];
    int sum_even=0,sum_odd=0;
    printf("Enter the elements in array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) sum_even+=arr[i];
        else sum_odd+=arr[i];
    }
    printf("Difference of even and odd indices:- %d ",sum_even-sum_odd);
}

