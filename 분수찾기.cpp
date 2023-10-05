#include <iostream>
#include <stdio.h>

int main(void) {

    int foundation[2] = {1, 1}, X, n = 1, m = 1;

    scanf("%d", &X);

    if (X == 1) printf("%d/%d\n", foundation[0], foundation[1]);

    else {

        while (true) {

            foundation[1] += 1;
            n += 1;
            
            if (n == X) {
            
                printf("%d/%d\n", foundation[0], foundation[1]);

                return 0;
            }

            while (foundation[1] != 1) {

                foundation[0] += 1;
                foundation[1] -= 1;

                n += 1;

                if (n == X) {
                
                    printf("%d/%d\n", foundation[0], foundation[1]);

                    return 0;
                }
            }

            foundation[0] += 1;
            n += 1;

            if (n == X) {
            
                printf("%d/%d\n", foundation[0], foundation[1]);

                return 0;
            }

            while (foundation[0] != 1) {

                foundation[1] += 1;
                foundation[0] -= 1;

                n += 1;

                if (n == X) {

                    printf("%d/%d\n", foundation[0], foundation[1]);

                    return 0;
                }
            }
        }
    }

    return 0;
}