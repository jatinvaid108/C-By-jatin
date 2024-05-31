#include <stdio.h>
#include <string.h>
struct student{
    char name[50];
    int roll;
    int marks[3];
    int percentage;
}stu[100];
int main(){
    int i,j,pass_per,n;
    scanf("%d",&n);
    scanf("%d",&pass_per);
     for (i = 0; i < n; i++){
        scanf("%s",&stu[i].name);
        scanf("%d",&stu[i].roll);
        int sum=0;
        for(int j=0;j<3;j++){
            scanf("%d",&stu[i].marks[j]);
            sum=sum+stu[i].marks[j];
        }
        stu[i].percentage=(sum * 100) / 300;
     }
     for (i = 0; i < n; i++) {
        if (stu[i].percentage < pass_per) {
            printf("%s\n", stu[i].name); // Print student name
            printf("%d\n", stu[i].roll); // Print student roll number
        }
    }
}