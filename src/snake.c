#include "snake.h"
#include "util.h"
#include "grid.h"

#include <stdlib.h>
#include <stdio.h>

struct Snake* generateSnake(struct Segment *head) {
    struct Snake *snake = (struct Snake*)malloc(sizeof(struct Snake));
    snake->length = 1;
    snake->segments = malloc(sizeof(struct Segment) * snake->length);
    snake->segments[0] = head;
    snake->direction = RIGHT;
    return snake;
}

int isSegmentAt(struct Snake *snake, int x, int y) {
    for (int i = 0; i < snake->length; i++) {
        struct Segment *segment = snake->segments[i];
        if (segment->x == x && segment->y == y)
            return 1;
    }
    return 0;
}

void moveTo(struct Snake *snake) {
    int x = 0;
    int y = 0;
    if (snake->direction == RIGHT)
        x++;
    if (snake->direction == LEFT)
        x--;
    if (snake->direction == UP)
        y--;
    if (snake->direction == DOWN)
        y++;

    struct Segment *head = snake->segments[0];
    struct Segment *move = generateSegment(head->x + x, head->y + y);

    int onApple = head->x == apple->x && head->y == apple->y;

    if (onApple) {
        while (1) {
            free(apple);
            int xPos = random(0, gridWidth);
            int yPos = random(0, gridHeight);
            if (!isSegmentAt(snake, xPos, yPos)) {
                apple = generateSegment(xPos, yPos);
                break;
            }
        }
    }

    snake->length += onApple;
    snake->segments = (struct Segment**)realloc(snake->segments, snake->length * sizeof(struct Segment));
    if (snake->segments == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = snake->length - 1; i > 0; i--)
        snake->segments[i] = snake->segments[i - 1];
    snake->segments[0] = move;
}

void handleKeypresses(struct Snake *snake) {
    if (wasKeyDown('W'))
        snake->direction = UP;
    else if (wasKeyDown('A'))
        snake->direction = LEFT;
    else if (wasKeyDown('S'))
        snake->direction = DOWN;
    else if (wasKeyDown('D'))
        snake->direction = RIGHT;
}

int isGameOver(struct Snake *snake) {
    struct Segment *head = snake->segments[0];
    if (head->x < 0 || head->x >= gridWidth  || head->y < 0 || head->y >= gridHeight)
        return 1;
    return 0;
}