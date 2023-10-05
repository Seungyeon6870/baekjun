#include <iostream>
#include <stdio.h>

int main(void) {

    int N, stt = 1, i = 0;

    scanf("%d", &N);

    while (true) {

        if (N == 1) {

            printf("%d\n", 1);
            break;
        }

        else if (N <= stt && N > stt - i * 6) {

            printf("%d\n", i + 1);
            break;
        }

        stt += 6 * (i + 1);
        i++;
    }

    return 0;
}