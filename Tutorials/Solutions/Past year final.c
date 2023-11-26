#include <stdio.h>

int main(){
    int x;
    while(x != -1){
        printf("Eneter a number (-1 to exit): ");
        scanf("%d", &x);

        if (x%7 == 0){
            printf("Integer is divisible gby 7");
        } else{
            printf("Integer is not divisble by 7");
        }
    }


}