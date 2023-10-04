#include <stdio.h>

void discount(float *ptr);

int main(){
    float price;

    printf("Enter price: ");
    scanf("%f",&price);

    discount(&price);

    printf("The final price is %f",price);

    return 0;
}

void discount(float *ptr){
    if(*ptr<10){
        *ptr = *ptr * 0.8;
    }
    else{
        *ptr = *ptr * 0.7;
    }
}