#include <stdio.h>

void upper(int n);

int main(void) {

    int n;

    scanf("%d", &n);

    upper(n);

    return 0;
}

void upper(int n) {

    int i, j, k, l = 2;

    for (i = 1; i <= 2*n-1; i++) {

        if (i < n) {

            for (j = 0; j < n - i; j++) {

                printf(" ");
            }
            for (k = 0; k < (2 * i - 1); k++) {

                printf("*");
            }
            printf("\n");
        }

        else if (i == n) {
            
            for (j = 0; j < 2 * n-1; j++) {
                printf("*");
            }
            printf("\n");
        }

        else if (i > n) {

            for (j = 0; j < i - n; j++) {

                printf(" ");
            }
            for (k = 0; k < (2 * (i - l) - 1); k++) {

                printf("*");
            }

            l += 2;

            printf("\n");
        }
    }

    return;
}