#include <iostream>
#include <stdio.h>

int main(void) {

    int arr[9][9] = {};
    int i, j, temp = arr[0][0], col = 1, row = 1;

    for (i = 0; i < 9; i++) {

        for (j = 0; j < 9; j++) scanf("%d", &arr[i][j]);
    }

    for (i = 0; i < 9; i++) {

        for (j = 0; j < 9; j++) {

            if (temp < arr[i][j]) {

                temp = arr[i][j];
                col = i + 1;
                row = j + 1;
            }
        }
    }

    printf("%d\n", temp);
    printf("%d %d\n", col, row);

    return 0;
}