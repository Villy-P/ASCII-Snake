#include "snake.h"

#include <stdlib.h>

struct Snake* generateSnake(struct Segment *head) {
    struct Snake *snake = (struct Snake*)malloc(sizeof(struct Snake));
    snake->length = 1;
    snake->segments = malloc(sizeof(struct Segment) * snake->length);
    snake->segments[0] = head;
    return snake;
}