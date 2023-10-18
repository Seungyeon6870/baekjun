#include <iostream>

int main(void) {

    int n, min_x = 0, max_x = 0, min_y = 0, max_y = 0, temp_x, temp_y;

    scanf("%d", &n);

    scanf("%d %d", &temp_x, &temp_y);

    min_x = temp_x;
    max_x = temp_x;
    min_y = temp_y;
    max_y = temp_y;

    for (int i = 0; i < n - 1; i++) {
        
        scanf("%d %d", &temp_x, &temp_y);

        if (temp_x > max_x) max_x = temp_x;
        if (temp_x < min_x) min_x = temp_x;

        if (temp_y > max_y) max_y = temp_y;
        if (temp_y < min_y) min_y = temp_y;
    }

    printf("%d\n", (max_x - min_x) * (max_y - min_y));

    return 0;
}