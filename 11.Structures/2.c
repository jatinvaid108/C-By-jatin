// Structures of Arrays
#include <stdio.h>
#include <string.h>
struct student {
    long long int roll;
    char name[100];
    float cgpa;
};
int main(){
    struct student cse[100];
    cse[0].roll=2310990784;
    cse[0].cgpa=9.8;
    strcpy(cse[0].name,"Jatin Vaid");

    printf("Name = %s\n",cse[0].name);
    printf("Roll no = %lld\n",cse[0].roll);
    printf("CGPA = %.2f\n",cse[0].cgpa);
    return 0;
}


//Initializing Structures :---

#include <stdio.h>
#include <string.h>
str