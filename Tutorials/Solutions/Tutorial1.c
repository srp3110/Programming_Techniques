#include <stdio.h>

int main()
{
// -----------------------------------------------------------------------------------------------
    
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

//     int num;

//     printf("Enter a 5 digit number => ");
//     scanf("%d",&num);

//     int n5 = num % 10;
//     int n4 = (num/10) % 10;
//     int n3 = (num/100) % 10;
//     int n2 = (num/1000) % 10;
//     int n1 = (num/10000) % 10;

//     printf("%d   %d   %d   %d   %d",n1 , n2, n3, n4 ,n5);

// -----------------------------------------------------------------------------------------------

/* Q6 - Write a program that asks the user to enter his/her weight in kg and height in meters and then
calculates the body mass index (BMI) of the user. The formula to calculate BMI is as shown below:
            
            BMI=(Weight in Kilograms)/(Height in Meters ×Height in Meters)
    The program should also output the BMI range of the person based on the table below:
                    
                    BMI values              |	
                    Less than 18.5	        |   Underweight
                    Between 18.5 and 24.9	|   Normal
                    Between 25 and 29.9	    |   Overweight
                    30 or greater	        |   Obese
*/

    // float W, H;
    // printf("Enter Weight in Kilograms => ");
    // scanf("%f",&W);

    // printf("Enter Height in Meters => ");
    // scanf("%f",&H);

    // float BMI = W/(H*H);
    // printf("Your BMI value is %f\n",BMI);

    // if (BMI < 18.5){
    //     printf("You are underweight");
    // }
    // else if (BMI >= 18.5 && BMI <= 24.9){
    //     printf("Your BMI is normal");
    // }
    // if (BMI >= 25 && BMI <= 29.9){
    //     printf("You are overweight");
    // }
    // if (BMI >= 30){
    //     printf("You are obese");
    // }

// -----------------------------------------------------------------------------------------------

/* Q7 */

// -----------------------------------------------------------------------------------------------

/* Extra Question 1 - Write a program that asks the user to enter two integers, obtains the numbers 
from the users, then prints the larger number followed by the words "is larger." If the numbers are 
equal, print the message "These numbers are equal." */

    // int a,b;
    // printf("Enter first integer value => ");
    // scanf("%d",&a);
    // printf("Enter second integer value => ");
    // scanf("%d",&b);

    // if (a>b){
    //     printf("%d is larger",a);
    // }
    // if (a<b){
    //     printf("%d is larger",b);
    // }
    // if (a==b){
    //     printf("These numbers are equal");
    // }

// -----------------------------------------------------------------------------------------------

/* Extra Question 2 - Write a program that reads in two integers and determines and prints whether
the first is the multiple of the second */

    // int a,b;
    // printf("Enter first value => ");
    // scanf("%d",&a);
    // printf("Enter second value => ");
    // scanf("%d",&b);

    // int rmndr = b%a;

    // if (rmndr == 0){
    //     printf("%d is a multiple of %d",a,b);
    // }

    // if (rmndr != 0){
    //     printf("%d is not a multiple of %d",a,b);
    // }

// -----------------------------------------------------------------------------------------------

    return 0;
}

// -----------------------------------------------------------------------------------------------

/*  Q2 - Identify and correct the errors in each of the following statements: 

        (a) scanf( “ %d ”, %value ); 
            solution:
            %value should be &value

        (b) a+b+c = sum;
            solution:
            sum = a+b+c;
        
        (c)	if (number >= largest);
                    largest==number;
            solution:
            if (number >= largest);
                    largest=number;

        (d) \\ program to determine the largest of three integers
            solution:
            // program to determine the largest of three integers

            program: 
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
            solution:
            printf ( “Remainder of %d divided by %d is %d\n ”, x, y, x%y );
*/