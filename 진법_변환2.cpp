#include <iostream>
#include <stdio.h>

void change_N(int N, int B);

int main(void) {

    int N, B;

    scanf("%d %d", &N, &B);

    if (N == 0 || B == 10) printf("%d", N);

    else change_N(N, B);

    printf("\n");

    return 0;
}

void change_N(int N, int B) {

    if (N < B) {

        if ((N >= 10) && (N <= 35)) printf("%c", N + 55);

        else printf("%d", N);

        return;
    }

    change_N(N / B, B);

    if (((N % B) >= 10) && ((N % B) <= 35)) printf("%c", (N % B) + 55);

    else printf("%d", N % B);

    return;
}