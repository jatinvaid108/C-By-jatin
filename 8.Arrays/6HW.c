#include <stdio.h>

int main() {
    int x, n;
    printf("Enter the number x: \n");
    scanf("%d", &x);
    int count = 0;
    int arr[] = {2, 3, 4, 5, 6, 7};
    for(int i = 0; i < 6; i++) {
        if(arr[i] > x) 
            count++;
    }
    printf("%d\n", count);
    return 0;
}

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {-10, -2, -3, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN; 
    for(int i = 0; i < n; i++) {
        mx = (mx > arr[i]) ? mx : arr[i];
    }
    int sec_mx = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] != mx) 
            sec_mx = (sec_mx > arr[i]) ? sec_mx : arr[i];
    }
    printf("%d\n", sec_mx);
    return 0;
}
