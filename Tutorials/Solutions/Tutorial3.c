#include <stdio.h>

int main(){

    /*Question 1 - Write a C program to calculate and print the sum
    of all multiples of 7 from 1 to 100. Use the for loop.*/

    // int n, sum;

    // for(n=7; n<=100; n+=7){
    //     sum += n;
    // }

    // printf("The sum of the multiples of 7 is %d", sum);

/*--------------------------------------------------------------------*/

    /*Question 2 - Write a C program that continuously ask the user to 
    enter two integer values and will only end when either one of the 
    value is a negative value. Use the do…while loop.*/

    // int x,y;

    // do{
    //     printf("Enter first value: ");
    //     scanf("%d",&x);
    //     printf("Enter second value: ");
    //     scanf("%d",&y);
    // } while(x>=0 && y>=0);

/*--------------------------------------------------------------------*/

    /*Question 3 - The factorial function is used frequently in 
    probability problems. The factorial of a positive integer n 
    (written n! and pronounced “n factorial”) is equal to the product 
    of the positive integers from 1 to n. Write a C program that 
    evaluates the factorials of the integers from 1 to 5.*/

    // int n,m,product;

    // for(n=1; n<=5; n++){
    //     product = 1;
    //     for(m=1; m<=n; m++){
    //         product = product*m;
    //     }
    //     printf("The factorial for %d is %d\n",n,product);
    // }


/*--------------------------------------------------------------------*/

    /*Question 4 - Write a C program that prints the following 
    pattern that is based on the size entered by the user. Use for 
    loops to generate the pattern.*/

    // int row,col,size;

    // printf("Enter size: ");
    // scanf("%d",&size);

    // for(row=1; row<= size; row++){
    //     for(col=1; col<=row; col++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

/*--------------------------------------------------------------------*/

    /*Question 5*/

    // float price, sum;
    // int product, quantity;

    // sum = 0.0;

    // while(1){
    //     printf("Product number: ");
    //     scanf("%d",&product);

    //     if (product == -1){
    //         break;
    //     }
        
    //     printf("Quantity: ");
    //     scanf("%d",&quantity);

    //     switch (product){
            
    //     case 1:
    //         price = 2.98;
    //         break;

    //     case 2:
    //         price = 4.50;
    //         break;

    //     case 3:
    //         price = 9.98;
    //         break;

    //     case 4:
    //         price = 4.49;
    //         break;

    //     case 5:
    //         price = 6.87;
    //         break;

    //     default:
    //         price = 0;
    //         break;
    //     }
    //     sum = sum + quantity * price;
    // }
    // printf("Total is %.2f", sum);

/*--------------------------------------------------------------------*/
/*Extra question 1*/

    // int x;
    // int sum = 0;

    // for(x=3; x<=33; x+=2){
    //     sum += x;
    // }
    // printf("Sum is %d", sum);

/*--------------------------------------------------------------------*/
/*Extra question 2*/

    // int x,y,z,sum;
    // sum  = 0;

    // printf("Enter number of values: ");
    // scanf("%d",&x);

    // for(z=1;z<=x;z++){
    //     printf("Enter value: ");
    //     scanf("%d",&y);
        
    //     if(y%2 == 0){
    //         sum = sum + y;
    //     }
    // }
    //     printf("The sum of values is %d",sum);


    return 0;
}
