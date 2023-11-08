// Q1

// #include <stdio.h>

// struct food
// {
//     char name[15];
//     int portion_weight;
//     int calories;
// };

// int main(){
//     struct food meal[10];

//     printf("Enter food type: ");
//     scanf("%s", &meal[0].name);
//     printf("Enter portion: ");
//     scanf("%d", &meal[0].portion_weight);
//     printf("Enter calories: ");
//     scanf("%d", &meal[0].calories);

//     printf("%s %d %d", meal[0].name, meal[0].portion_weight, meal[0].calories);

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------
// Q2

// #include <stdio.h>

// struct student
// {
//     int age;
//     float weight;
//     float height;
// };

// int main(){
//     struct student STD[3];
//     int n;

//     for(n=0; n<3; n++){
//         printf("Enter age: ");
//         scanf("%d", &STD[n].age);
//         printf("Enter weight: ");
//         scanf("%f", &STD[n].weight);
//         printf("Enter height: ");
//         scanf("%f", &STD[n].height);
//     }

//     printf("%-10s %-10s %-10s\n", "Age", "Weight", "Height");

//     for(n=0; n<3 ; n++){
//         printf("%-10d %-10.2f %-10.2f\n", STD[n].age, STD[n].weight, STD[n].height);
//     }

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------
// Q3

// #include <stdio.h>
// #include <string.h>

// struct ComplexNum
// {
//     float real;
//     float imaginary;
// };

// typedef struct ComplexNum complex;

// int main(){
//     complex x1 = {1.2, 3.5};
//     complex x2 ,sum;
//     x2.real = 4.5;
//     x2.imaginary = 10.67;

//     sum.real = x1.real + x2.real;
//     sum.imaginary = x1.imaginary + x2.imaginary;

//     printf("The sum is %.2f + %.2f", sum.real, sum.imaginary);

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------
// Q4

// #include <stdio.h>

// struct student
// {
//     int ID;
//     char name[15];
//     float mark;
// };


// int main(){
//     struct student num[100];
//     int n,count;

//     printf("Enter number of students: ");
//     scanf("%d", &n);

//     for(count=0; count<n; count++){
//         printf("Enter Student ID: ");
//         scanf("%d", &num[count].ID);
//         printf("Enter Student Name: ");
//         scanf("%s", &num[count].name);
//         printf("Enter Mark: ");
//         scanf("%f", &num[count].mark);
//     }

//     for(count=0; count<n; count++){
//         if(num[count].mark>60 && num[count].mark<80){
//             printf("\n %s", num[count].name);
//         }
//     }

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------
// Q5

// to be continued

// -------------------------------------------------------------------------------------------------------------------
// Q6

#include <stdio.h>

struct restaurant
{
    char name[15];
    char food[20];
    float cost;
};

int main(){
    struct restaurant RES[100];
    int count, dec;

    count = 0;
    while (1){
        printf("Enter name of restaurant: ");
        scanf("%s", RES[count].name);
        printf("Enter type of food served: ");
        scanf("%s", RES[count].food);
        printf("Enter average cost per person: ");
        scanf("%s", &RES[count].cost);
        count++;

        printf("Enter 1 to continue, -1 to exit: ");
        scanf("%d", &dec);

        if(dec == -1){
            break;
        }
    }

    void PrintOut(RES, count);

    return 0;
}

void PrintOut(struct restaurant R[100], int C){
    struct restaurant temp;
    int n, swap;
    while (1){
        swap = 0;
        for(n=0; n<C; n++){
            if(R[n].cost>R[n+1].cost){
                temp = R[n];
                R[n] = R[n+1];
                R[n+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0){
            break;
        }
    }

    for(n = 0; n<C; n++){
        printf("%-15s %-15s %-15f\n", R[n].name, R[n].food, R[n].cost);
    }
}