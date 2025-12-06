#include <stdio.h>

int main() {
    int choice = 0;
    float temp, converted_temp;

    while (1) {  

        printf("\n==== Temperature Converter ====\n");
        printf("Enter 1 to convert Celsius to Fahrenheit\n");
        printf("Enter 2 to convert Celsius to Kelvin\n");
        printf("Enter 3 to convert Fahrenheit to Celsius\n");
        printf("Enter 4 to convertFahrenheit to Kelvin\n");
        printf("Enter 5 to convert Kelvin to Celsius\n");
        printf("Enter 6 to convert Kelvin to Fahrenheit\n");
        printf("Enter 7 to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice ==7)
        {  printf("Exiting... ^_^\n");
            break;
        }
         printf("\n");
         printf("\n");
         printf("\n");

        switch (choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temp);
                converted_temp = (temp * 9/5) + 32;
                printf("Result: %.2f °C = %.2f °F\n", temp, converted_temp);
                break;

            case 2:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temp);
                converted_temp = temp + 273.15;
                printf("Result: %.2f °C = %.2f K\n", temp, converted_temp);
                break;

            case 3:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temp);
                converted_temp = (temp - 32) * 5/9;
                printf("Result: %.2f °F = %.2f °C\n", temp, converted_temp);
                break;

            case 4:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temp);
                converted_temp = (temp - 32) * 5/9 + 273.15;
                printf("Result: %.2f °F = %.2f K\n", temp, converted_temp);
                break;

            case 5:
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &temp);
                converted_temp = temp - 273.15;
                printf("Result: %.2f K = %.2f °C\n", temp, converted_temp);
                break;

            case 6:
                printf("Enter temperature in Kelvin: ");
                scanf("%f", &temp);
                converted_temp = (temp - 273.15) * 9/5 + 32;
                printf("Result: %.2f K = %.2f °F\n", temp, converted_temp);
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }


    return 0;
}



