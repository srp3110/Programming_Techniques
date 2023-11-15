#include <stdio.h>

// Function to update loyalty points based on amount spent
void updateLoyaltyPoints(int *loyaltyPoints, float amountSpent) {
    // Update loyalty points based on the amount spent
    if (amountSpent >= 50.0) {
        *loyaltyPoints += 5; // Award 5 points for every $50 spent
        printf("Loyalty points updated successfully.\n");
    } else {
        printf("No loyalty points awarded for this purchase.\n");
    }
}

int main() {
    int customerID, loyaltyPoints = 0;
    float amountSpent;

    printf("Welcome to the Grocery Shop Loyalty Program!\n");

    // Input customer ID and amount spent
    printf("Enter customer ID: ");
    scanf("%d", &customerID);
    printf("Enter the amount spent: $");
    scanf("%f", &amountSpent);

    // Call the function to update loyalty points
    updateLoyaltyPoints(&loyaltyPoints, amountSpent);

    // Display the updated loyalty points
    printf("\nCustomer ID: %d\n", customerID);
    printf("Updated Loyalty Points: %d\n", loyaltyPoints);

    printf("\nThank you for using the Loyalty Program!\n");

    return 0;
}
