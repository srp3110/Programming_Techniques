#include <stdio.h>

struct food
{
    char name[15];
    int portion_weight;
    int calories;
};

int main(){
    struct food meal[10];

    printf("Enter food type: ");
    scanf("%s", &meal[0].name);
    printf("Enter portion: ");
    scanf("%d", &meal[0].portion_weight);
    printf("Enter calories: ");
    scanf("%d", &meal[0].calories);

    printf("%s %d %d", meal[0].name, meal[0].portion_weight, meal[0].calories);

    return 0;
}