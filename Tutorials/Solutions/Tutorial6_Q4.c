#include <stdio.h>

void shift(char *ptr1,char *ptr2,char *ptr3,char *ptr4,char *ptr5);

int main(){
    char C1,C2,C3,C4,C5;
    C1 = 'A';
    C2 = 'B';
    C3 = 'C';
    C4 = 'D';
    C5 = 'E';

    printf("%c %c %c %c %c \n",C1,C2,C3,C4,C5);
    shift(&C1, &C2, &C3, &C4, &C5);
    printf("%c %c %c %c %c \n",C1,C2,C3,C4,C5);

    return 0;
}

void shift(char *ptr1,char *ptr2,char *ptr3,char *ptr4,char *ptr5){
    int sort;
    sort = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = *ptr4;
    *ptr4 = *ptr5;
    *ptr5 = sort;
}