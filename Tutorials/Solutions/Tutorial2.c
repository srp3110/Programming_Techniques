#include <stdio.h>

int main(){

    /*Question 1*/

    // float sales = 0;
    // float salary = 0;

    // while (1){
    //     printf("Enter sales in dollars (-1 to end): ");
    //     scanf("%f", &sales);

    //     if (sales == -1){
    //         break;
    //     } else {
    //         salary = 200+(0.09*sales);
    //         printf("Salary is: $%.2f\n", salary);
    //     }
    // }

/*--------------------------------------------------------------------*/

    /*Question 2*/

    // float work_hour = 0;
    // float hourly_rate = 0;
    // float salary = 0;

    // while (1){
    //     printf("Enter number of hours worked (-1 to end): ");
    //     scanf("%f", &work_hour);
        
    //     if (work_hour == -1){
    //         break;
    //     } else {
    //         printf("Enter hourly rate of the worker ($00.00): ");
    //         scanf("%f", &hourly_rate);

    //         if (work_hour <= 40){
    //             salary = work_hour*hourly_rate;
    //             printf("Salary is $%.2f\n", salary);
    //         } else{
    //             salary = (40*hourly_rate)+((work_hour-40)*(1.5*hourly_rate));
    //             printf("Salary is $%.2f\n", salary);
    //         }
    //     }
    // }

/*--------------------------------------------------------------------*/

    /*Question 3*/

    // int size, col, row;
    // printf("Enter a size (1 to 20): ");
    // scanf("%d", &size);

    // if (size < 1 || size > 20){
    //     return 1;
    // } else{
    //     row = 1;
    //     while (row <= size){
    //         col = 1;
    //         while (col <= size){
    //         printf("*");
    //         col++;
    //     }
    //     row++;
    //     printf("\n");
    //     }
    // }

/*--------------------------------------------------------------------*/

    /*Question 4*/

    // int X,n0,n1,n2,n3,n4,decimal;
    // printf("Enter a binary value: ");
    // scanf("%d", &X);

    // n0 = X%10;
    // X = X/10;
    // n1 = X%10;
    // X = X/10;
    // n2 = X%10;
    // X = X/10;
    // n3 = X%10;
    // X = X/10;
    // n4 = X%10;

    // decimal = n0*1+n1*2+n2*4+n3*8+n4*16;
    // printf("The decimal value is %d",decimal);

/*--------------------------------------------------------------------*/

    /*Question 5*/

    // int X,rem,count;
    // printf("Enter an integer value: ");
    // scanf("%d",&X);

    // count = X-1;
    // while(count>1){
    //     rem = X%count;
    //     if (rem==0){
    //         printf("This is not a prime number");
    //         break;
    //     }
    //     count--;
    // }
    // if (count == 1){
    //     printf("PRIME");
    // }

    return 0;
}
