#include <stdio.h>

void add(double *ptr1, double *ptr2);
void subtract(double *ptr1, double *ptr2);
void divide(double *ptr1, double *ptr2);
void multiply(double *ptr1, double *ptr2);

int main(){
    int choice;
    double num1, num2;
    printf("Choose either to add(1), subtract(2), divide(3) or multiply(4): ");
    scanf("%d",&choice);

    printf(" Enter first value: ");
    scanf("%lf",&num1);
    printf(" Enter second value: ");
    scanf("%lf",&num2);

    switch(choice){
        case 1:
        add(&num1,&num2);
        break;
        case 2:
        subtract(&num1,&num2);
        break;
        case 3:
        divide(&num1,&num2);
        break;
        case 4:
        multiply(&num1,&num2);
        break;
    }
}

void add(double *ptr1, double *ptr2){
    printf("The addition value is %f", *ptr1 + *ptr2);
}

void subtract(double *ptr1, double *ptr2){
    printf("The subtraction value is %f", *ptr1 - *ptr2);
}

void divide(double *ptr1, double *ptr2){
    printf("The division value is %f", *ptr1 / *ptr2);
}

void multiply(double *ptr1, double *ptr2){
    printf("The multiplication value is %f", *ptr1 * *ptr2);
}