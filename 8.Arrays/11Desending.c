#include <stdio.h>
int main(){
    int arr[100];
    int num;
    scanf("%d",&num);
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
    printf("%d %d",arr[0],arr[1]);

}

//IMPORTANT CODE of inserting element
#include <stdio.h>
#define Max_number 100
int main()
{
    int arr[Max_number], element, position, size, i;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The position to insert the element\n");
    scanf("%d", &position);
    printf("Enter the element which we have to insert\n");
    scanf("%d", &element);
    for (i = size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
// Deletingofanelement
#include<stdio.h>
int main(){
    int arr[100],n,position;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position you want to delete - ");
    scanf("%d",&position);
    // This step
    for(int i=position;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    // end
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
#include <stdio.h>
int main(){
    int arr[100];
    int size,ele,pos,i;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&pos);
    scanf("%d",&ele);
    for(i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    size++;
    for(int i=0;i<size;i++){
         printf("%d ",arr[i]);
    }

}


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int count = 1;

    for (int i = 0; i < len; i++) {
        // Check if the next character is the same
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            // Print the character and its count
            printf("%c%d", str[i], count);
            count = 1; // Reset count for the next character
        }
    }

    printf("\n");
    return 0;
}
