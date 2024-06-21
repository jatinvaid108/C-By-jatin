//type def Used to create Alias for data type (i.e to create nick name )
#include <stdio.h>
#include <string.h>
typedef struct ComputerEngineeringStudent {
    long long int roll;
    char name[100];
    float cgpa;
}cse;
int main(){
    cse s1;
    s1.roll=2310990784;
    s1.cgpa=9.12;
    strcpy(s1.name,"Jatin Vaid");
    printf(" Student Roll : %lld\n",s1.roll);
    printf("Student Name: %s\n",s1.name);
    printf("Student CGPA: %.2f\n",s1.cgpa);
}
