/*Take as input S, a string. Write a function that replaces every even character with
the character having just higher ASCII code and every odd character with the character
having just lower ASCII code. Print the value returned.
Input: abcg
Output: badf  */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (i % 2 == 0)
            str[i]++;
        else
            str[i]--;
    }
    printf("%s", str);
}

// Write a C program which can convert Lowercase to Uppercase of given string.
//  NOTE: String length will not exceed limit of 100.
//  Input format : First line take string input
//  Output format : Print the converted string
//  Sample Input 1 :
//  raamMohan
//  Sample Output 1 :
//  RAAMMOHAN
//  Sample Input 2 :
//  raamMohan
//  Sample Output 2 :
//  RAAMMOHAN

#include <stdio.h>
void uppercase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    uppercase(str);
    printf("%s\n", str);
    return 0;
}

