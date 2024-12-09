#include <stdio.h>


float kmToMiles(float km) {
    return km * 0.621371;
}

float inchesToFoot(float inches) {
    return inches / 12.0;
}

float cmToInches(float cm) {
    return cm / 2.54;
}

float poundsToKgs(float pounds) {
    return pounds * 0.453592;
}

float litersToOunces(float liters) {
    return liters * 33.814;
}


int main() {
    int choice;
    float input, result;

    do {
        
        printf("\n--- Unit Conversion Menu ---\n");
        printf("1. Kilometers to Miles\n");
        printf("2. Inches to Foot\n");
        printf("3. Centimeters to Inches\n");
        printf("4. Pounds to Kilograms\n");
        printf("5. Liters to Ounces\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        
        printf("Enter the value to convert: ");
        scanf("%f", &input);

        
        switch (choice) {
            case 1:
                result = kmToMiles(input);
                printf("%.2f Kilometers = %.2f Miles\n", input, result);
                break;
            case 2:
                result = inchesToFoot(input);
                printf("%.2f Inches = %.2f Foot\n", input, result);
                break;
            case 3:
                result = cmToInches(input);
                printf("%.2f Centimeters = %.2f Inches\n", input, result);
                break;
            case 4:
                result = poundsToKgs(input);
                printf("%.2f Pounds = %.2f Kilograms\n", input, result);
                break;
            case 5:
                result = litersToOunces(input);
                printf("%.2f Liters = %.2f Ounces\n", input, result);
                break;
            
            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }
    } while (choice != 6);

    return 0;
}


