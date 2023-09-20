    /*Question 1 - Write a function that inputs a series of 10 integers 
    and passes them one at a time to function isEven, which uses the 
    remainder operator to determine whether an integer is even. The 
    function should take an integer argument and return 1 if the 
    integer is even and 0 otherwise.*/

#include <stdio.h>

int isEven(int X); 

int main(){

    int IN, count, res;

    for(count=0; count<10; count++){
        printf("Enter an integer: ");
        scanf("%d",&IN);
        res = isEven(IN);
        if(res==1){
            printf("Even\n");
        }
        else if(res==0){
            printf("Odd\n");
        }
    }
    return 0;
    }

    int isEven(int X){
        if(X%2 == 0){
            return 1;
        }
        else{
        return 0;
    }
}
