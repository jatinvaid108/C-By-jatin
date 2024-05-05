// Inserting an element 
#include <stdio.h>
void insertelement(int arr[],int size,int pos,int ele){
    int i;
    for(i= size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/4;
    int pos,ele;
    printf("Enter the position and element to be inserted \n");
    scanf("%d %d",&pos,&ele);
    insertelement(arr,size,pos,ele);
    printf("Array after insertion: \n");
    for (int i = 0; i < size+1; i++) {
        printf("%d ", arr[i]);
    }
}

//deleting 

#include <stdio.h>
void delete(int arr[],int position,int size){
    for(int i=position;i < size-1;i++){
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[]={4,5,6,7,8,9,3,2,1,3,2,9,6,8,69};
    int position,size;
    size=sizeof(arr)/4;
    printf("Enter the position you want to remove :  \n");
    scanf("%d",&position);
    delete(arr,position,size);
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
}

#include <stdio.h>
int main(){
    int position,size,ele;
    printf("Enter the position and element ;\n");
    scanf("%d %d",&position,&ele);
    int arr[]={1,2,3,4,5,6,7,8,9};
    size=sizeof(arr)/4;
    arr[position]=ele;
    printf("The new arry is :- \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

// search
#include <stdio.h>
int main(){
    int position,size,ele,i;
    printf("Enter the position  ;\n");
    scanf("%d",&position);
    int arr[]={6,5,4,7,8,9,3,2,1,3,2,4,6,7};
    size=sizeof(arr)/4;
    printf("The element at position %d is:  %d", position ,arr[position]);
}