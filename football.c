#include <stdio.h>
#include "football.h"

int twopointcounter = 0;
int threepointcounter = 0;
int sixpointcounter = 0;
int sevenpointcounter = 0;
int eightpointcounter = 0;
int counter;


int count_combinations(int points) {
    if (points < 0)  {
        printf("Invalid Input");
        return 0;
    } else if (points == 0) {
        return 0;
    } else if (points == 1) {
        return 0;
    } else {
        for (int eightpointcounter = 0; eightpointcounter * 8 <= points; eightpointcounter++) {
            for (int sevenpointcounter = 0; sevenpointcounter * 7 <= points; sevenpointcounter++) {
                for (int sixpointcounter = 0; sixpointcounter * 6 <= points; sixpointcounter++) {
                    for (int threepointcounter = 0; threepointcounter * 4 <= points; threepointcounter++) {
                        for (int twopointcounter = 0; twopointcounter * 3 <= points; twopointcounter++) {
                            if ((8*eightpointcounter + 7*sevenpointcounter + 6*sixpointcounter + 3*threepointcounter + 2*twopointcounter) == points) {
                                counter ++;
                            }
                        }
                    }
                }
            }
        }
        }
        return counter;
    }
    
void print_combinations(int points) {
    if (points < 0)  {
        printf("Invalid Input");
    } else if (points == 0) {
        printf("Stop");
    } else if (points == 1) {
        printf("Stop");
    } else {
        for (int eightpointcounter = 0; eightpointcounter * 8 <= points; eightpointcounter++) {
            for (int sevenpointcounter = 0; sevenpointcounter * 7 <= points; sevenpointcounter++) {
                for (int sixpointcounter = 0; sixpointcounter * 6 <= points; sixpointcounter++) {
                    for (int threepointcounter = 0; threepointcounter * 4 <= points; threepointcounter++) {
                        for (int twopointcounter = 0; twopointcounter * 3 <= points; twopointcounter++) {
                            if ((8*eightpointcounter + 7*sevenpointcounter + 6*sixpointcounter + 3*threepointcounter + 2*twopointcounter) == points) {
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety \n", eightpointcounter, sevenpointcounter, sixpointcounter, threepointcounter, twopointcounter);
                            }
                        }
                    }
                }
            }
        }
        }
    }