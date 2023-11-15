#include <stdio.h>

#define MAX_ITEMS 50
#define DISCOUNT_THRESHOLD 100

// Function to calculate total cost with discount
void calculateTotalCost(float items[], int numItems, float *totalCost, float *discount) {
    *totalCost = 0.0;
    *discount = 0.0;

    // Calculate the total cost of items
    for (int i = 0; i < numItems; ++i) {
        *totalCost += items[i];
    }

    // Apply a discount if the total cost exceeds the threshold
    if (*totalCost > DISCOUNT_THRESHOLD) {
        *discount = 0.1 * (*totalCost); // 10% discount
        *totalCost -= *discount;
    }
}

int main() {
    int numItems;
    float items[MAX_ITEMS];
    float totalCost, discount;

    printf("Welcome to Chen Whey Grocery Shop!\n");

    // Input the number of items
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    // Input the price of each item
    for (int i = 0; i < numItems; ++i) {
        printf("Enter the price of item %d: $", i + 1);
        scanf("%f", &items[i]);
    }

    // Call the function to calculate total cost with discount
    calculateTotalCost(items, numItems, &totalCost, &discount);

    // Display the results
    printf("\nTotal Cost: $%.2f\n", totalCost);

    // Display discount if applied
    if (discount > 0.0) {
        printf("Discount Applied: $%.2f\n", discount);
    }

    printf("\nThank you for shopping with Whey Whey!\n");

    return 0;
}
