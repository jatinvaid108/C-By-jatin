// Write A program to store(House No,Block ,city ,state)
// #include <stdio.h>
// #include <string.h>
//  struct address{
//     int house;
//     int block;
//     char city[100];
//     char state[100];
// };

// void printaddress(struct address add){
//     printf("Address is: %d %d %s %s \n",add.house,add.block,add.city,add.state);
// }

// int main(){
//     struct address add[5];
//     printf("Enter the address of 1st person: \n");
//     scanf("%d",&add[0].house);
//     scanf("%d",&add[0].block);
//     scanf("%s",add[0].city);
//     scanf("%s",add[0].state);

//     printf("Enter the address of 2nd person: \n");
//     scanf("%d",&add[1].house);
//     scanf("%d",&add[1].block);
//     scanf("%s",add[1].city);
//     scanf("%s",add[1].state);

//     printf("Enter the address of 3rd person: \n");
//     scanf("%d",&add[2].house);
//     scanf("%d",&add[2].block);
//     scanf("%s",add[2].city);
//     scanf("%s",add[2].state);
    
//     printf("Enter the address of 4th person: \n");
//     scanf("%d",&add[3].house);
//     scanf("%d",&add[3].block);
//     scanf("%s",add[3].city);
//     scanf("%s",add[3].state);

//     printf("Enter the address of 5th person: \n");
//     scanf("%d",&add[4].house);
//     scanf("%d",&add[4].block);
//     scanf("%s",add[4].city);
//     scanf("%s",add[4].state);

//     printaddress(add[0]);
//     printaddress(add[1]);
//     printaddress(add[2]);
//     printaddress(add[3]);
//     printaddress(add[4]);
//     return 0;
// }

//------------------------------------------------------------------------------------->

// #include <stdio.h>
// #include <string.h>

// struct address {
//     int house;
//     int block;
//     char city[100];
//     char state[100];
// };

// void printaddress(struct address add) {
//     printf("Address is: %d %d %s %s\n", add.house, add.block, add.city, add.state);
// }

// int main() {
//     struct address add[5];

//     // Input addresses for 5 persons
//     for (int i = 0; i < 5; ++i) {
//         printf("Enter the address of person %d:\n", i + 1);
//         scanf("%d", &add[i].house);
//         scanf("%d", &add[i].block);
//         scanf("%s", add[i].city);
//         scanf("%s", add[i].state);
//     }

//     // Print addresses
//     for (int i = 0; i < 5; ++i) {
//         printaddress(add[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct address{
    int home;
    int block;
    char city[100];
};
void printadd(struct address adds){
    printf("Address is: %d %d %s\n ",adds.home,adds.block,adds.city);
}
int main(){
    struct address adds[2];
    for(int i=0;i<2;i++){
      printf("Enter the details: %d\n",i+1);
      scanf("%d",&adds[i].home);  
      scanf("%d",&adds[i].block);  
      scanf("%s",&adds[i].city);  
    }
    for(int i=0;i<2;i++){
        printadd(adds[i]);
    }
}


