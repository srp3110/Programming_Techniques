/*Question 3 - Write a function that returns the largest of 
               four floating-point numbers.
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