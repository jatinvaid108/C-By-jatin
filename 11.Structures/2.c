// Arrays of Structures
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
// So that baar baar dot operator na use krna pdhe 
#include <stdio.h>
#include <string.h>
struct student{
    long long int roll;
    char name[100];
    float cgpa;
};
int main(){
    struct student s1={2310990784,"Jatin Vaid",9.19};
    printf(" Student Roll : %lld\n",s1.roll);
    printf("Student Name: %s\n","Jatin Vaid");
    printf("Student CGPA: %.2f\n",s1.cgpa);
}

//Pointer to structure 

#include <stdio.h>
#include <string.h>
struct student {
    long long int roll;
    char name[100];
    float cgpa;
};
int main(){
    struct student s1={2310990784,"JAtin ji",9.8};
    printf("Student roll %lld\n",s1.roll);
    struct student *ptr=&s1;
    printf("Student Roll: %s\n",(*ptr).name);
    printf("Student Roll: %f\n",ptr->cgpa);
}
