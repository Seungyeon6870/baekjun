#include <iostream>

int main(void) {

    int n, size = 0, temp = 0, arr[100000] = {};

    while (true) {

        scanf("%d", &n);

        if (n == -1) break;

        for (int i = 1; i < n; i++) {

            if (n % i == 0) {

                temp += i;
                arr[size] = i;
                size++;
            }
        }

        if (temp == n) {

            printf("%d = %d", n, arr[0]);

            for (int i = 1; i < size; i++) {

                printf(" + %d", arr[i]);
            }

            printf("\n");
        }

        else printf("%d is NOT perfect.\n", n);

        for (int i = 0; i < size; i++) arr[i] = 0;
        size = 0;
        temp = 0;
    }

    return 0;
}