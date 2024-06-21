#include <stdio.h>
int main() {
    int sum = 0;
    int arr[5];
    printf("Enter the elements: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}

#include <stdio.h>
int main() {
    int x;
    char y;
    int z;
    float a;
    printf("%lu\n", sizeof(x));  // will show in bytes
    printf("%lu\n", sizeof(y));
    printf("%lu\n", sizeof(z));
    printf("%lu\n", sizeof(a));
    return 0;
}

#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);  // Har element ka size 4 byte hota . so Here 8X4=32 --> 32/4=8 elements in array ;
    int sum = 0;               // Upper maine n variable bana liya . Usme total size store karr liya
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}

#include <stdio.h>
int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int product = 1;
    for(int i = 0; i < n; i++) {
        product *= arr[i];
    }
    printf("%d", product);
    return 0;
}


