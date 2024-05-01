#include "grid.h"

#include <stdio.h>

int gridWidth = 15;
int gridHeight = 15;

void displayGrid() {
    printf("+");
    for (int i = 0; i < gridWidth; i++)
        printf("-");
    printf("+\n");
}