#ifndef __C_SNAKE_SNAKE__
#define __C_SNAKE_SNAKE__

#include "segment.h"

enum Direction {
    UP,
    DOWN,
    RIGHT,
    LEFT
};

struct Snake {
    int length;
    struct Segment **segments;
    enum Direction direction;
};

struct Snake* generateSnake(struct Segment *head);
int isSegmentAt(struct Snake *snake, int x, int y);
void move(struct Snake *snake);
void handleKeypresses(struct Snake *snake);
int isGameOver(struct Snake *snake);

#endif