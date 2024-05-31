// Palindrome array {1,2,2,4,3,2,1} {1,2,3,3,2,1}
// Non Palindrome array {1,2,3,4,2,1}

// See there are number of ways and i am sure you know that but lets try difficult one i.e last one 
#include <stdio.h>
#include <stdbool.h>

// Function to check if an array is a palindrome
bool isPalindrome(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is a palindrome
    if (isPalindrome(arr, n)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}


// .............................................:::::::::::::::>>>

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bool isPalindrome = true; // Assume it's a palindrome initially

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = false; // Not a palindrome
            break; // No need to continue checking
        }
    }

    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}

