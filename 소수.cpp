#include <iostream>

int main(void) {

    int m, n, sum = 0, min = 0, tf = 1;

    scanf("%d %d", &m, &n);

    for (int i = m; i < n + 1; i++) {

        if (i == 1) continue;

        else if (i == 2) {

            min = i;
            sum += i;
        }

        else {

            tf = 1;

            for (int j = 2; j < i; j++) {
            
                if (i % j == 0) {
                    
                    tf = 0;
                    break;
                }
            }

            if (tf == 0) continue;

            else if (tf == 1) {

                if (min == 0) min = i;
                sum += i;
            }
        }
    }

    if (sum == 0) printf("-1\n");
    else printf("%d\n%d\n", sum, min);

    return 0;
}