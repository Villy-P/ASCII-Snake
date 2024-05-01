#include "snake.h"

#include <stdlib.h>

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