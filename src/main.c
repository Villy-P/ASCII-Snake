#include "grid.h"
#include "segment.h"
#include "snake.h"

#include <stdio.h>
#include <windows.h>

int WasKeyDown(int key) {
    if (0x00000001 & GetAsyncKeyState(key))
        return 1;
    return 0;
} 

int main() {
    struct Segment* head = generateSegment(gridWidth / 4, gridHeight / 2);
    struct Snake* snake = generateSnake(head);
    apple = generateSegment(gridWidth / 2, gridHeight / 2);
    while (1) {
        displayGrid(snake);
        printf("%c[%dAHELLO!\n", 0x1B, gridHeight + 3);
        move(snake);
        Sleep(1000);
    }
    return 0;
}