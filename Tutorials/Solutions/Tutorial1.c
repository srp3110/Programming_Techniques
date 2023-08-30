#include <stdio.h>

int main()
{
    // Q1 - Write a C program that accomplish each of the following:

    /* (a) Prompt the user to enter an integer and store the 
    value entered in variable X */
    
    // int variableX;
    
    // printf("Enter an integer => ");
    // scanf("%d",&variableX);
    
    // printf("variableX = %d",variableX);

// -----------------------------------------------------------------------------------------------

    /* (b) Prompt the user to enter an integer and if the value is
    not equal to 7, print “The variable number is not equal to 7 */

    // int integerA;

    // printf("Enter an integer => ");
    // scanf("%d",&integerA);

    // if (integerA != 7){
    //     printf("The variable number is not equal to 7.");
    // }

    // else {
    //     printf("The variable number is equal to 7.");
    // }

// -----------------------------------------------------------------------------------------------

    /* (c) Print the message “This is a C program.” on one line. */

    // printf("This is a C program\n");

// -----------------------------------------------------------------------------------------------

    /* (d) Print the message “This is a C program.” with each word on a separate line. */

    // printf("This\n is\n a\n C\n Program\n");

// -----------------------------------------------------------------------------------------------

    /* Q3 - Write a program that asks the user to enter 2 numbers, obtains them from the 
    user and prints their sum, product, difference and remainder. */

    // int num1, num2;
    // int sum, diff, prod, rmndr;

    // printf("Enter value for first number => ");
    // scanf("%d",&num1);

    // printf("Enter value for second number => ");
    // scanf("%d",&num2);

    // sum = num1+num2;
    // diff= num1-num2;
    // prod = num1*num2;
    // rmndr = num1%num2;

    // printf("The sum of both values is %d\n",sum);
    // printf("The difference of both values is %d\n",diff);
    // printf("The product of both values is %d\n",prod);
    // printf("The remainder of both values is %d\n",rmndr);

// -----------------------------------------------------------------------------------------------

    /* Q4 - Write a program that reads an integer and prints out whether it’s odd or even. */

    // int num;

    // printf("Enter a number => ");
    // scanf("%d",&num);

    // if (num%2 == 0){
    //     printf("This is an even number.");
    // }
    // else{
    //     printf("This is an odd number.");
    // }

// -----------------------------------------------------------------------------------------------

    /* Q5 - Write a program that inputs one five-digit number, separates the number into its individual
    digits and prints the digits separated from one another by three spaces. For example, if the user 
    types in 42139, the program should print 4   2   1   3   9   */

    

    return 0;
}


/*  Q2 - Identify and correct the errors in each of the following statements: 

        (a) scanf( “ %d ”, %value ); 

            %value shouold be &value

        (b) a+b+c = sum;

            a,b,c and sum are not variables:
        
        (c)	if (number >= largest);
                    largest==number;


        (d) program to determine the largest of three integers

        int a,b,c;

        printf("Enter an integer => ");
        scanf("%d",&a);

        printf("Enter an integer => ");
        scanf("%d",&b);

        printf("Enter an integer => ");
        scanf("%d",&c);

        if (a > b) and (a > c){
            printf("The largest integer is 'a'");
        }

        else if(b > a) and (b > c){
            printf("The largest integer is 'b'"); (ERROR)
        }

        else{
            printf("The largest integer is 'c'");
        }

        (e) printf ( “Remainder of %d divided by %d is \n ”, x, y, x%y );
            
            The operation x%y should be carried out by another variable, not 
            directly executed in the printf line:
*/