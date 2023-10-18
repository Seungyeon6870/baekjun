#include <iostream>

int main(void) {

    long n, sum;
    int arr[7] = {};

    scanf("%ld", &n);

    for (long i = 1; i < n; i++) {

        long j = i + (i / 1000000) + (i % 1000000) / 100000 + (i % 100000) / 10000 + (i % 10000) / 1000 + (i % 1000) / 100 + (i % 100) / 10 + (i % 10);
        if (n == j) {

            printf("%ld\n", i);
            
            return 0;
        }
    }

    printf("0\n");

    return 0;
}