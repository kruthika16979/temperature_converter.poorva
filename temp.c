#include <stdio.h>

int main() {
    int choice;
    float temp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);
    printf("Temperature in Fahrenheit: %.2f\n", (temp * 9 / 5) + 32);
}

    return 0;
}
