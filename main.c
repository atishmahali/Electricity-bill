#include <stdio.h>

int main() {
    double units, total_bill;
    
    // Ask the user for the electricity consumption in kilowatt-hours (kWh)
    printf("Enter the total electricity consumption in kilowatt-hours (kWh): ");
    scanf("%lf", &units);
    
    // Calculate the electricity bill based on different slabs
    if (units <= 50) {
        total_bill = units * 0.50;
    } else if (units <= 150) {
        total_bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        total_bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    
    // Add additional fixed charges or taxes, if applicable
    // For example: total_bill += additional_charges;
    
    // Display the calculated electricity bill
    printf("Electricity Bill: $%.2lf\n", total_bill);
    
    return 0;
}
