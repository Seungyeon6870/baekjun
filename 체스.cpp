#include <stdio.h>

void chess(int *parr);

int main(void) {

    int arr[6];

    scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);

    chess(arr);

    return 0;
}

void chess(int *parr) {

    int i;
    const int r_arr[6] = {1, 1, 2, 2, 2, 8};

    for (i = 0; i < 6; i++) {

        printf("%d ", *(r_arr + i) - *(parr + i));
    }

    return;
}