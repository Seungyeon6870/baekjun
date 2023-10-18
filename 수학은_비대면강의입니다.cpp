#include <iostream>

int main(void) {

    int a, b, c, d, e, f;
    long temp1, temp2, x, y;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    temp1 = b * d - a * e;
    temp2 = b * f - c * e;
    x = temp2 / temp1;

    temp1 = e * a - b * d;
    temp2 = f * a - c * d;
    y = temp2 / temp1;

    printf("%ld %ld\n", x, y);

    return 0;
}