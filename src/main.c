#include "grid.h"
#include "segment.h"
#include "snake.h"

#include <stdio.h>
#include <windows.h>

int main() {
    int game = 1;
    struct Segment* head = generateSegment(gridWidth / 4, gridHeight / 2);
    struct Snake* snake = generateSnake(head);
    apple = generateSegment(gridWidth / 2, gridHeight / 2);
    while (game) {
        displayGrid(snake);
        printf("%c[%dA!\n", 0x1B, gridHeight + 3);
        handleKeypresses(snake);
        move(snake);
        Sleep(100);
    }
    return 0;
}