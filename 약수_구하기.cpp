#include <iostream>
#include <stdio.h>

int main(void) {

    int n, k, temp = 1, cnt = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {

        if (n % i == 0) {

            cnt++;
            temp = i;

            if (cnt == k) {

                printf("%d\n", temp);

                return 0;
            }
        }
    }

    printf("%d\n", 0);

    return 0;
}