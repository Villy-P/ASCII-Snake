#include "grid.h"
#include "segment.h"
#include "snake.h"

#include <stdio.h>

int main() {
    struct Segment* head = generateSegment(gridWidth / 4, gridHeight / 2);
    struct Snake* snake = generateSnake(head);
    apple = generateSegment(gridWidth / 2, gridHeight / 2);
    displayGrid(snake);
    return 0;
}