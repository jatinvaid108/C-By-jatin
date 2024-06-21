
#include <stdio.h>
struct student
{
    char name[50];
    int marks[3];
    int rollno;
    int percentage;
} stu[100];
int main()
{
    int n, i, j, passing_per;
    scanf("%d", &n);
    scanf("%d", &passing_per);
    for (i = 0; i < n; i++)
    {
        scanf("%s", stu[i].name);
        scanf("%d", &stu[i].rollno);
        int sum = 0;
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &stu[i].marks[j]);
            sum = sum + stu[i].marks[j];
        }
        stu[i].percentage = (sum * 100) / 300;
    }
    for (i = 0; i < n; i++)
    {
        if (stu[i].percentage < passing_per)
        {
            printf("%s\n", stu[i].name);
            printf("%d\n", stu[i].rollno);
        }
    }
    return 0;
}


#include <stdio.h>
struct student{
    char name[100];
    long long int roll;
    int marks[3];
};
int main(){
    struct student stu[100];
    int num,pass_per,i,j,sum=0;
    scanf("%d",&num);
    scanf("%d",&pass_per);
    for(int i=0;i<num;i++){
        scanf("%s",stu[i].name);
        scanf("%d",&stu[i].roll);
        for(j=0;j<3;j++){
            scanf("%d",&stu[i].marks[j]);
            sum+=stu[i].marks[j];
        }
        int percentage=(sum/300)*100;
        for(int i=0;i<num;i++){
            if(pass_per<percentage){
                printf("THe OUTPUT ---------------------------------------------------------------->>>>\n");
                printf("%s\n",stu[i].name);
                printf("%lld\n",stu[i].roll);
            }
        }
    }
}

#include <stdio.h>
int fibo(int num){
    if(num<=1){
        return num;
    }
    else{
        return fibo(num-1)+fibo(num-2);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d ",fibo(i));
    }
}





#include <stdio.h>

float calculateBill(int units) {
    float amount = 0.0;

    if (units <= 100) {
        amount = units * 2.00;
    } else if (units <= 300) {
        amount = 100 * 2.00 + (units - 100) * 3.00;
    } else if (units <= 500) {
        amount = 100 * 2.00 + 200 * 3.00 + (units - 300) * 4.00;
    } else {
        amount = 100 * 2.00 + 200 * 3.00 + 200 * 4.00 + (units - 500) * 5.00;
    }

    if (amount > 2500) {
        amount += amount * 0.10;  // 10% surcharge
    }

    if (amount < 100) {
        amount = 100;  // Minimum bill amount
    }

    return amount;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float totalAmount = calculateBill(units);

    printf("Amount to be paid by the consumer: Rs. %.2f\n", totalAmount);

    return 0;
}







#include <stdio.h>

int main() {
    int calls, sms;
    float fixed_rent = 100;

    printf("Enter the total number of calls consumed: ");
    scanf("%d", &calls);

    printf("Enter the total number of SMS consumed: ");
    scanf("%d", &sms);

    // Calculate call charges
    float call_charges = 0;
    if (calls > 50 && calls <= 100) {
        call_charges = (calls - 50) * 0.80;
    } else if (calls > 100 && calls <= 200) {
        call_charges = (50 * 0.80) + ((calls - 100) * 0.50);
    } else if (calls > 200) {
        call_charges = (50 * 0.80) + (100 * 0.50) + ((calls - 200) * 0.10);
    }

    // Calculate SMS charges
    float sms_charges = 0;
    if (sms > 100) {
        sms_charges = (sms - 100) * 0.50;
    }

    // Total charges before surcharge
    float total_charges = fixed_rent + call_charges + sms_charges;

    // Apply surcharge
    float surcharge = total_charges * 0.10;
    float total_bill = total_charges + surcharge;

    printf("The total mobile bill is: Rs. %.2f\n", total_bill);

    return 0;
}


#include <stdio.h>
#include <ctype.h>
#include <string.h> 
int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input,100,stdin); // Read the entire line (including spaces)

    // Toggle the case of each character
    for (int i = 0; i<strlen(input); i++) {
        if (islower(input[i])) {
            input[i] = toupper(input[i]); // Convert lowercase to uppercase
        } else if (isupper(input[i])) {
            input[i] = tolower(input[i]); // Convert uppercase to lowercase
        }
    }

    printf("Toggled string: %s\n", input);
    return 0;
}
