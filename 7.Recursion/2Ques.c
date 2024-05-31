// James want to climb n steps from ground level. At each step he can either take a
// jump of 1 step or a jump of 2 steps or a jump of 3 steps. Find the total number of in
// which James can reach the nth step.

// Input : 2
// Output: 2
// Explanation : James can reach the 2nd step in 2 ways if at each step he can take a jump of
// 1,2 or 3. In this reach 2nd step by the following ways step 0 to step 2 directly or 0 to 1
// then step 1 to step 2

// Input: 3
// Output: 4
// Explanation : James can reach the 3rd step in 4 ways if at each step he can take a jump of
// 1,2 or 3.

// Input: 4
// Output: 7
// Explanation : James can reach the 4th step in 7 ways if at each step he can take a jump of
// 1,2 or 3.

//Solution:-

#include <stdio.h>
int ways(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    else{
        return ways(n-1)+ways(n-2)+ways(n-3);
    }
}
int main(){
    int num;
    printf("Enter the number of stairs:- \n");
    scanf("%d",&num);
    printf("The ways in which james can climb stairs is: %d\n",ways(num));

}

// We start with ways(4).
// Since 4 is not a base case, it recursively calculates ways(3), ways(2), and ways(1).
// For ways(3):
// It further calculates ways(2), ways(1), and ways(0).
// For ways(2):
// It further calculates ways(1) and ways(0).
// ways(1) returns 1.
// ways(0) returns 1.
// So, ways(2) evaluates to 1 + 1 = 2.
// ways(1) returns 1.
// ways(0) returns 1.
// So, ways(3) evaluates to 2 + 1 + 1 = 4.
// For ways(2):
// It further calculates ways(1) and ways(0).
// ways(1) returns 1.
// ways(0) returns 1.
// So, ways(2) evaluates to 1 + 1 = 2.
// For ways(1):
// It returns 1.
// For ways(0):
// It returns 1.
// Now, we go back to the calculation of ways(4):
// ways(4) is calculated as ways(3) + ways(2) + ways(1).
// ways(3) is already calculated as 4.
// ways(2) is already calculated as 2.
// ways(1) is already calculated as 1.
// So, ways(4) evaluates to 4 + 2 + 1 = 7.
