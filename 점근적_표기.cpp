#include <iostream>

int main(void) {

    int a_1, a_0, c, n_0, i = 1, temp;

    scanf("%d %d", &a_1, &a_0);
    scanf("%d", &c);
    scanf("%d", &n_0);

    if (c - a_1 < 0) {

        if (n_0 <= a_0 / (c - a_1)) printf("1\n");
        else if (n_0 > a_0 / (c - a_1)) printf("0\n");
    }

    else if (c - a_1 > 0) {

        if (n_0 >= a_0 / (c - a_1)) printf("1\n");
        else if (n_0 < a_0 / (c - a_1)) printf("0\n");
    }

    else {
        if (a_0 == 0) printf("1\n");
        else printf("0\n");
    }

    return 0;
}