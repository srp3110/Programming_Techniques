/*Question 2 - Write a function that displays a solid rectangle of asterisks whose sides are 
specified in the integer parameters side1 and side2. For example, if the sides are 4 and 5, 
the function displays the following:
    ***** 
    ***** 
    ***** 
    ***** 
*/

#include <stdio.h>

float Largest(float F1, float F2, float F3, float F4);

int main(){
    float F1,F2,F3,F4,max;

    printf(" Enter float no.1: ");
    scanf("%f",&F1);
    printf(" Enter float no.2: ");
    scanf("%f",&F2);
    printf(" Enter float no.3: ");
    scanf("%f",&F3);
    printf(" Enter float no.4: ");
    scanf("%f",&F4);

    max = Largest(F1,F2,F3,F4);

    printf("The largest value is %f",max);

    return 0;
}

float Largest(float F1, float F2, float F3, float F4){
    float L;
    L=F1;
    if(F2>L){
        L=F2;
    }
    if(F3>L){
        L=F3;
    }
    if(F4>L){
        L=F4;
    }
    return L;
}