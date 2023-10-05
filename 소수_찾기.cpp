#include <iostream>

int main(void) {

    int arr[100] = {};
    int n, cnt;

    scanf("%d", &n);

    cnt = n;

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {

        if (arr[i] == 1) cnt--;

        else if (arr[i] == 2) continue;

        else {

            for (int j = 2; j < arr[i]; j++) {

                if (arr[i] % j == 0) {

                    cnt--;
                    break;
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}