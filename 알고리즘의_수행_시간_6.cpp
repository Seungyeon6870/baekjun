#include <iostream>

int main(void) {

    long long n;

    scanf("%lld", &n);

    if (n < 2) printf("0\n3\n");

    else printf("%lld\n3\n", n * (n - 1) * (n - 2) / 6);

    return 0;
}