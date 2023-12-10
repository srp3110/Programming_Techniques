#include <stdio.h>

int main(){
    int product, quantity;
    float total, price;
    float sum = 0.0;

    while (1){
        printf("Product number (-1 to end): ");
        scanf("%d",&product);

        if(product==-1){
            break;
        }

        printf("Quantity sold for one day: ");
        scanf("%d",&quantity);

        switch (product){
            case 1:
            price = 2.98;
            break;

            case 2:
            price = 4.50;
            break;

            case 3:
            price = 9.98;
            break;

            case 4:
            price = 4.49;
            break;

            case 5:
            price = 6.87;
            break;
        }
        sum = sum + (quantity*price);
    }
    printf("\nThe total retail value is $%.2f",sum);

    return 0;
}