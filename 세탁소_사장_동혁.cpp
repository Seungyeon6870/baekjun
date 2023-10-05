#include <iostream>
#include <stdio.h>

int main(void) {

    int rest, T;

    scanf("%d", &T);

    int C[T];

    for (int i = 0; i < T; i++) {

        scanf("%d", &C[i]);
    }

    for (int i = 0; i < T; i++) {

        printf("%d %d %d %d\n", C[i] / 25, (C[i] % 25) / 10, ((C[i] % 25) % 10) / 5, C[i] % 5);
    }

    return 0;
}