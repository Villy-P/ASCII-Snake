#ifndef __C_SNAKE_SNAKE__
#define __C_SNAKE_SNAKE__

#include "segment.h"

struct Snake {
    int length;
    struct Segment **segments;
};

struct Snake* generateSnake(struct Segment *head);
int isSegmentAt(struct Snake *snake, int x, int y);

#endif