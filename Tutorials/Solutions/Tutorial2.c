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

    float work_hour = 0;
    float hourly_rate = 0;
    float salary = 0;

    while (1){
        printf("Enter number of hours worked (-1 to end): ");
        scanf("%f", &work_hour);
        
        if (work_hour == -1){
            break;
        } else {
            printf("Enter hourly rate of the worker");
            scanf("%f", &hourly_rate);
        }
    }


    return 0;
}
