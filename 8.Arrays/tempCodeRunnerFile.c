#include <stdio.h>
int main(){
    int arr[]={2,8,7,6,5,4,33,22,12,56};
    int n=sizeof(arr)/4;
    int i=0;
    int j=n-1;
    while(i<j){
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