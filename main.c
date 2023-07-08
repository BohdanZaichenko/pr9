#include <stdio.h>
#include <stdlib.h>

int minsteps(int x, int y) {

    int diff = y - x;

    if (diff <= 2) {
        return diff;
    }

    int steps = 2;
    int prevstep = 2;

    while (diff > prevstep) {
        steps++;
        prevstep = prevstep + 1;
        diff = diff - prevstep;
    }

    if (diff > 0) {
        steps++;
    }

    return steps;
}

int main() {
    printf("Zaichenko Bohdan IPZ-22008b\n");
    int x, y;
    printf("\nInput x: ");
    scanf("%d", &x);
    printf("\nInput y: ");
    scanf("%d", &y);

    int result = minsteps(x, y);
    printf("\nMinimum number of steps: %d\n", result);

    return 0;
}
