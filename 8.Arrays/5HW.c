//FInd the square of all natural numbers till n and print the elements of the array:-
#include <stdio.h>
int main() {
    int num, square;
    printf("Enter the number: ");
    scanf("%d", &num);
    int arr[num];
    for(int i = 1; i <= num; i++) {
        square = i * i;
        printf("%d ", square);
    }
    return 0;
}
// Given ana array of integer change all the odd indexed elemets to its second multiple and all t he even indexed elementsto be incremented by 10 
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int arr[num];

    // Input array elements
    printf("Enter elements: ");
    for (i = 0; i < num; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Modify array elements based on index
    for (i = 0; i < num; i++) {
        if (i % 2 == 0)
            arr[i] += 10; // Increment even-indexed elements by 10
        else
            arr[i] *= 2; // Multiply odd-indexed elements by 2
    }

    // Print modified array
    printf("Modified Array:\n");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
