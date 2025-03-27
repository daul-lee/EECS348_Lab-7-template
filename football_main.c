#include <stdio.h>
#include "football.h"

int main(int argc, char *argv[]) {
    int points;

    for (;;) {
        printf("Enter the number of points: \n");
        int matches = scanf("%d", &points);

        if (matches != 1) {
            break;
        }
        if (points < 0) {
            printf("Invalid Input");
            continue;
        }

        count_combinations(points);
            if (count_combinations(points) == 0) {
            break;
        }
        print_combinations(points);
    }

    return 0;
}