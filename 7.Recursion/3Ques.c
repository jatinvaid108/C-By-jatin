// Rishi sir has given a fun task to Ravi. The task is to calculate the sum of natural numbers
// in a given range x, y using a recursive function and print the sum. if the sum is even then print
// message HAPPY otherwise print message SAD.

// Input Format
// Input N = Number of Test Cases, followed by x and y.

// x is lower limit and y is upper limit
// Output Format
// First line will print sum of natural number and next line will print message HAPPY or SAD.

// Sample Input
// 3
// 1 1000
// 50 100
// 100 150

// Sample Output

// 500500
// HAPPY
// 3825
// SAD
// 6375
// SAD

// Explanation :
// The sum of natural numbers from 1 to 1000 is 500500, which is even, hence the message is
// HAPPY.
// The sum of natural numbers from 50 to 100 is 3825, which is odd, hence the message is SAD.
// The sum of natural numbers from 100 to 150 is 6375, which is odd, hence the message is SAD.


#include <stdio.h>
int fun_game(int x,int y){
    if(x==y){
        return x;
    }
    else{
        return x+fun_game(x+1,y);
    }
}
int main(){
    int x,y,n,sum;
    printf("ENter number of cases: \n");
    scanf("%d",&n);
    printf("Enter the Input: \n");
    for(int i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        sum=fun_game(x,y);
        printf("%d\n",sum);
        if(sum%2==0) printf("Happy\n");
        else printf("Sad\n");
    }

}


#include<stdio.h>
#include<string.h>
int main() {
char str[1000];
scanf("%s",str);
for(int i=0;i<strlen(str);i++)
{
if(i%2==0)
str[i]++;
else
str[i]--;
}
printf("%s",str);
return 0;
}


#include <stdio.h>
int main(){
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        printf("%d ",i);
    }
    printf("\n");
}