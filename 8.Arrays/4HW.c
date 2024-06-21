#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 12, 33, 22, 11, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = arr[0];                                      // Assuming that at this index element is greatest. Now compare with all elements 
    for(int i = 1; i < n; i++) {                          // We will start from i = 1 since index 0 has been covered
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    printf("The greatest element in array is: %d\n", mx);
    return 0;
}
//This is my self made program where i am finding 1st and 2nd largest element in an array 

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

#include <stdio.h>
int main(){
    int arr[100];
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int min1=arr[0];
    int min2=arr[1];
    for(int i=0;i<num;i++){
        if(arr[i]<min1) min1=arr[i];
    }
    for(int i=0;i<num;i++){
        if(arr[i]>min1 && arr[i]<min2) min2=arr[i];
    }
    printf("%d %d",min1,min2);
}



#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 12, 33, 22, 11, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mn = arr[0];
    for(int i = 1; i < n; i++) {                           
        if (arr[i] < mn) {
            mn = arr[i];
        }
    }
    printf("The smallest element in array is: %d\n", mn);
    return 0;
}

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 12, 33, 22, 11, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN;                                      
    for(int i = 0; i < n; i++) {                          
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    printf("The greatest element in array is: %d\n", mx);
    return 0;
}

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {-10, -5, -6, -2, -4, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN;                                      
    for(int i = 0; i < n; i++) {                          
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
    printf("The greatest element in array is: %d\n", mx);
    return 0;
}
