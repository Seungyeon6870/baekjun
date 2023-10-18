#include <iostream>

int main(void) {

    int n, tf = 0, temp_i = 0, temp_j = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if ((3 * i) + (5 * j) == n) {

                printf("%d\n", i + j);
                return 0;
            }
        }
    }

    printf("-1\n");

    return 0;
}