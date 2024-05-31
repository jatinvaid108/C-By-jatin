#include <stdio.h>

int main() {
    // 5 Integers -> 6, 2, 8, 5, 0
    int arr[5];    // Declaration

    arr[0] = 6;   // Initializing array elements (individual)
    arr[1] = 2;   
    arr[2] = 8;
    arr[3] = 5;
    arr[4] = 0;
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d ", arr[4]);
    return 0;
}

// Using loops :----

// #include <stdio.h>
// int main(){
//     int arr[5];    
//     arr[0]=6;   
//     arr[1]=2;
//     arr[2]=8;
//     arr[3]=5;
//     arr[4]=0;
//     for(int i=0;i<=4;i++){
//         printf("%d ", arr[i]);
//     }
// }

// Taking input with the help of loops .......
#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter array elements: \n");
    for(int i=0; i<=4; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<=4; i++) {
        printf("%d ", arr[i] * 2);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter array elements: \n");
    for(int i=0; i<=4; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<=4; i++) {
        printf("%d ", arr[i] * 2);
    }
    arr[0] = 100;    // Updating array 
    printf("\n");
    for(int i=0; i<=4; i++) {
        printf("%d ", arr[i] * 2);
    }
    return 0;
}
