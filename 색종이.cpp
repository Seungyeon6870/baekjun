#include <iostream>
#include <stdio.h>

int main(void) {

    int canvas[100][100] = {};
    int location[2];
    int i, j, k, confetti_num, cnt = 0;

    scanf("%d", &confetti_num);

    for (i = 0; i < confetti_num; i++) {

        scanf("%d %d", &location[0], &location[1]);

        for (j = 0; j < 10; j++) {

            for (k = 0; k < 10; k++) {

                if (canvas[j + location[0]][k + location[1]] == 1) continue;

                else {

                    canvas[j + location[0]][k + location[1]] = 1;
                    cnt += 1;
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}