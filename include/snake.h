#ifndef __C_SNAKE_SNAKE__
#define __C_SNAKE_SNAKE__

#include "segment.h"

struct Snake {
    int length;
    Segment segments[];
};

void generateSnake(Segment head);

#endif