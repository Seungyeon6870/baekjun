#include <iostream>
#include <stdio.h>
#include <math.h>

int main(void) {

    int N, dot = 2;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {

        dot += pow(2, i);
    }

    printf("%.0f\n", pow(dot, 2));

    return 0;
}