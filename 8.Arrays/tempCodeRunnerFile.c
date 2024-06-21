
#include <stdio.h>
int main(){
    int arr[]={26,34,33,30,32,27,31,25,28,29};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=arr[0];
    int mx1=arr[1];
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>mx1 && arr[i]<mx){
            mx1=arr[i];
        }
    }
    printf("%d %d",mx,mx1);
}