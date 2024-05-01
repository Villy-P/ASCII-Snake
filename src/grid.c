#include "grid.h"
#include "snake.h"

#include <stdio.h>

int gridWidth = 15;
int gridHeight = 15;

void displayGrid(struct Snake *snake) {
    printf("+");
    for (int i = 0; i < gridWidth; i++)
        printf(" -");
    printf(" +\n");
    for (int i = 0; i < gridHeight; i++) {
        printf("|");
        for (int j = 0; j < gridWidth; j++) {
            if (isSegmentAt(snake, i, j))
                printf(" @");
            else
                printf("  ");
        }
        printf(" |\n");
    }
    printf("+");
    for (int i = 0; i < gridWidth; i++)
        printf(" -");
    printf(" +\n");
}