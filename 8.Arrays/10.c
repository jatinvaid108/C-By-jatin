#include <stdio.h>
int main(){
    int arr[100];
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int i,j,even=0;
    printf("----------------------->\n");
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            printf("%d \n",arr[i]);
        even++;
        }
    }
    printf("%d",even);
    
}

#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[100];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}    