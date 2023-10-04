#include <stdio.h>

int High(int *ptr);

int main(){
    int num[3],n,Highest;

    for(n=0;n<3;n++){
        printf("Enter an integer: ");
        scanf("%d",&num[n]);
    }
    Highest = High(num);
    printf("The highest value is %d", Highest);

    return 0;
}

int High(int *ptr){
    int Max;
    Max = *ptr;
    
    if(Max<*(ptr+1)){
        Max = *(ptr+1);
    } if(Max<*(ptr+2)){
        Max = *(ptr+2);
    }
    return Max;
}