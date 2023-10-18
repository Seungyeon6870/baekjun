#include <iostream>

int main(void) {

    int n, temp, cnt = 0;
    int arr[1000] = {};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    while (true) {

        for (int i = 0; i < n - 1; i++) {
            
            if (arr[i] > arr[i + 1]) {

                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }

            else if (arr[i] <= arr[i + 1]) cnt++;
        }

        if (cnt == n - 1) {

            for (int i = 0; i < n; i++) printf("%d\n", arr[i]);

            return 0;
        }

        cnt = 0;
    }
}