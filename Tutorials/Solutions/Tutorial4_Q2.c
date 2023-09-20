/*Question 2 - Write a function that displays a solid rectangle of asterisks whose sides are 
specified in the integer parameters side1 and side2. For example, if the sides are 4 and 5, 
the function displays the following:
    ***** 
    ***** 
    ***** 
    ***** 
*/

#include <stdio.h>

int main(){
    int side1, side2;
    printf("Enter side 1: ");
    scanf("%d",&side1);
    printf("Enter side 2: ");
    scanf("%d",&side2);

    Disp(side1, side2);

    return 0;
}

void Disp(int side1, int side2){
    int row, col;
    for(row=1; row<=51; row++){
        for(col=1; col<=52; col++){
            printf("*");
        }
        printf("\n");
    }
}