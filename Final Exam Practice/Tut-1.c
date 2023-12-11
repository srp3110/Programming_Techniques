#include <stdio.h>

int main() {
    int size=5, row, col;

    for (row=1; row<=size; row++){
        for (col=row; col<=size; col++){
            // if(col==1||row==col||row==size){
                printf("* ");
            // } else{
            //     printf("  ");
            // }
        }
        printf("\n");
    }

	return 0;

}