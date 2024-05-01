#include "grid.h"
#include "segment.h"
#include "snake.h"

#include <stdio.h>

int main() {
    struct Segment* head = generateSegment(gridWidth / 2, gridHeight / 2);
    struct Snake* snake = generateSnake(head);
    displayGrid();
    return 0;
}