#include "temperature.h"
#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius*9.0/5.0 + 32);
};

float fahrenheit_to_celsius(float fahrenheit) {
    return ((fahrenheit - 32)*5.0/9.0);
};

float celsius_to_kelvin(float celsius){
    return (celsius + 273.15);
};

float kelvin_to_celsius(float kelvin){
    return (kelvin-273.15);
};

void weather_report(float celsius) {
    if (celsius <= 0) {
        printf("Freezing, wear a heavy jacket or stay indoors \n" );
    } else if ((celsius > 0.0) && (celsius <= 10.0) ) {
        printf("Cold, wear a light-ish jacket \n"); 
    } else if ((celsius > 10.0) && (celsius <= 25.0)) {
        printf("Comfortable, jacket may be optional \n");
    } else if ((celsius > 25.0) && (celsius <= 35.0)) {
        printf("Hot, shorts are advised \n");
    } else {
        printf("Extreme heat, stay indoors \n");
    }
}