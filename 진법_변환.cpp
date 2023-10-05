#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

    char N[30] = {};
    int B, decimal = 0, size;

    scanf("%s %d", N, &B);

    size = strlen(N);

    if (B == 10) {

        printf("%s\n", N);
    }

    else {

        for (int i = 0; i < size; i++) {

            if ((N[i] >= 65 && N[i] <= 90)) N[i] -= 55;
            else if ((N[i] >= 97 && N[i] <= 122)) N[i] -= 87;
            else if ((N[i] >= 48 && N[i] <= 57)) N[i] -= 48;

            decimal += N[i] * pow(B, size - i - 1);
        }

        printf("%d\n", decimal);
    }

    return 0;
}

//1001(2) = 1 * 2^0 + 0 * 2^1 + 0 * 2^2 + 1 * 2^3