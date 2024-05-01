#include "segment.h"

struct Segment* generateSegment(int x, int y) {
    struct Segment *segment = (struct Segment*)malloc(sizeof(struct Segment));
    segment->x = x;
    segment->y = y;
    return segment;
}