// Array is basically collection of data with same data type :-
// Structures comes into game we can store any int float char value . Collection values of differnent data types

//Syntax

#include <stdio.h>
#include <string.h>
struct student{    //Structure is a user defined data type
    char name[100];
    long long int roll;
    float cgpa;
};                  //don't forget to use statement terminator  


int main(){
    struct student s1;     //Initialized the variable 
    s1.roll=2310990784;
    s1.cgpa=9.19;
    strcpy(s1.name,"Jatin Vaid");
    printf("Student name=%s\n",s1.name);
    printf("Student roll no=%lld\n",s1.roll);   // %lld ka dyan rakho 
    printf("Student cgpa=%.2f\n",s1.cgpa);
}