#include "temperature.h"
#include <stdio.h>

/*
typedef struct {
float value;
} fahrenheit_t
*/

int main(int argc, char *argv[]) {
    float temp;
    char Temp1;
    char Temp2;
    for (;;) {
        printf("Enter the temperature scale to start with (F for Fahrenheit, C for Celsius, K for Kelvin): \n");
        int matches = scanf(" %c", &Temp1);

        printf("Enter the temperature scale to convert to (F for Fahrenheit, C for Celsius, K for Kelvin): \n");
        matches = scanf(" %c", &Temp2);

        printf("Enter the temperature: \n");
        matches = scanf(" %f", &temp);

        if (matches != 1) {
            break;
        }
        if (Temp1 == 'K') {
            if (temp < 0.0) {
                printf("Kelvin temperatures cannot be less than 0 \n");
                continue;
            }
            if (Temp2 == 'C') {
                printf("%f \n", kelvin_to_celsius(temp));
                weather_report(kelvin_to_celsius(temp));
            } else if (Temp2 == 'F') {
                float temp_temp = kelvin_to_celsius(temp);
                printf("%f \n", celsius_to_fahrenheit(temp_temp));
                weather_report(temp_temp);
            } else {
                printf("Invalid Input \n");
                continue;
        }
        } else if (Temp1 == 'C') {
            if (Temp2 == 'F') {
                printf("%f \n", celsius_to_fahrenheit(temp));
                weather_report(temp);
            } else if (Temp2 == 'K') {
                printf("%f \n", celsius_to_kelvin(temp));
                weather_report(temp);
            } else {
                printf("Invalid Input \n");
                continue;
            }
        } else if (Temp1 == 'F') {
            if (Temp2 == 'C') {
                printf("%f \n", fahrenheit_to_celsius(temp));
                weather_report(fahrenheit_to_celsius(temp));
            } else if (Temp2 == 'K') {
                float temp_temp = fahrenheit_to_celsius(temp);
                printf("%f \n", celsius_to_kelvin(temp_temp));
                weather_report(temp_temp);
            } else {
                printf("Invalid Input \n");
                continue;
            }
        } else {
            printf("Invalid Input \n");
            continue;
        }
}

    return 0;

}
