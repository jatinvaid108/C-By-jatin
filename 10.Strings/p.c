// #include <stdio.h>
// #include <string.h>
// int main(){
//     char sen[]="Hi ! Tommorrow is my C programming paper";
//     int n=strlen(sen);
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(sen[i]=='a'|| sen[i]=='e'|| sen[i]=='i'||sen[i]=='o' ||sen[i]=='u'){
//             count++;
//         }
//     }
//     printf("%d",count);
// }

// Replace with 'a' at even position:-

#include <stdio.h>
int main() {
    char sen[100];
    printf("Enter your string:\n");
    fgets(sen, 100, stdin);
    int n = strlen(sen);
    for(int i=0;i<n;i++) {
        if (i % 2 == 0) {
            sen[i] = 'a';
        }
    }
    printf("%s", sen);
}


#include <stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Before Swapping: %d %d\n",x,y);
    swap(&x,&y);
    printf("After Swapping: %d %d\n",x,y);

}

#include <stdio.h>
#include <string.h>
int main(){
    char sen[100];
    printf("ENter the string: \n");
    fgets(sen,100,stdin);
    int temp;
    int n=strlen(sen);
    for(int i=0;i<n/2;i++){
        temp=sen[i];
        sen[i]=sen[n-1-i];
        sen[n-1-i]=temp;
    }
    printf("%s\n",sen);
}


#include<stdio.h>
#include<string.h>
int main(){
    char sen[1000];
    printf("ENter the string: \n");
    fgets(sen,1000,stdin);
    int n=strlen(sen);
    for(int i=0;i<n;i++){
        if(i%2==0) sen[i]++;
        else sen[i]--;
    }
    printf("%s",sen);
}


#include<stdio.h>

struct student{
char name[50];
int marks[3];
int rollno;
int percentage;
} stu[100];

int main(){
int n,i,j,passing_per;
scanf("%d",&n);
scanf("%d",&passing_per);
for(i=0; i<n;i++){
scanf("%s",stu[i].name);
scanf("%d",&stu[i].rollno);
int sum=0;

for(j=0; j<3; j++){
scanf("%d",&stu[i].marks[j]);
sum=sum+stu[i].marks[j];
}
stu[i].percentage = (sum*100)/300;
}
for(i=0; i<n;i++)
{
if(stu[i].percentage<passing_per)
{
printf("%s\n",stu[i].name);
printf("%d\n",stu[i].rollno);
}
}
return 0;
}


#include <stdio.h>

// Define a structure to store student information
struct student {
    char name[50];
    int marks[3];
    int rollno;
    int percentage;
} stu[100]; // Define an array of student structures

int main() {
    int n, i, j, passing_per;

    // Input the total number of students and passing percentage
    scanf("%d", &n);
    scanf("%d", &passing_per);

    // Input student details and calculate their percentage
    for (i = 0; i < n; i++) {
        scanf("%s", stu[i].name); // Input student name
        scanf("%d", &stu[i].rollno); // Input student roll number
        int sum = 0;

        // Input student marks for each subject and calculate total marks
        for (j = 0; j < 3; j++) {
            scanf("%d", &stu[i].marks[j]);
            sum = sum + stu[i].marks[j];
        }

        // Calculate student percentage
        stu[i].percentage = (sum * 100) / 300;
    }

    // Check and print the details of students who failed to pass
    for (i = 0; i < n; i++) {
        if (stu[i].percentage < passing_per) {
            printf("%s\n", stu[i].name); // Print student name
            printf("%d\n", stu[i].rollno); // Print student roll number
        }
    }

    return 0;
}




#include <stdio.h>
#include <string.h>
struct books{
    char name[50];
    char author[50];
    int price;
};
int main(){
    struct books b[3];
        for(int i=0;i<3;i++){
            printf("enter the %dth book, price and its author ", i+1 );
            scanf("%s %d %s", &b[i].name,&b[i].price, &b[i].author);

            
        }
        for(int i=0;i<3;i++){
            printf("%s %s %d\n", b[i].name, b[i].author, b[i].price);
        
    }
    char search[100];
    printf("enter the detail about the book u wanna search");
    scanf("%s", &search);

    for(int i=0;i<5;i++){
        if (strcmp(search, b[i].name)==0){
            printf("%s\n %s", b[i].name , b[i].author );
        }
       
    }
    for(int i=0;i<5;i++){
        if (strcmp(search, b[i].author)==0){
            printf("%s\n %s \n %d", b[i].name , b[i].author, b[i].price );
        }
       
    }


    
 return 0;
}