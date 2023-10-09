#include <iostream>

int main(void) {

    int x, y, w, h, min_x, min_y;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    if ((double)w / 2 <= x) min_x = w - x;
    else min_x = x;

    if ((double)h / 2 <= y) min_y = h - y;
    else min_y = y;

    printf("%d\n", min_x > min_y ? min_y : min_x);

    return 0;
}