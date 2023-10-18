#include <iostream>

int main(void) {

    int n, k, cnt = 0, temp;
    int score[1000];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) scanf("%d", &score[i]);

    while (true) {

        for (int i = 0; i < n - 1; i++) {
            
            if (score[i] > score[i + 1]) {

                temp = score[i];
                score[i] = score[i + 1];
                score[i + 1] = temp;
            }

            else if (score[i] <= score[i + 1]) cnt++;
        }

        if (cnt == n - 1) break;

        cnt = 0;
    }

    printf("%d\n", score[n - k]);

    return 0;
}