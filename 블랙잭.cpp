#include <iostream>

int main(void) {

    int n, m, temp = 0;
    int arr[100] = {};

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n - 2; i++) {

        for (int j = i + 1; j < n - 1; j++) {

            for (int k = j + 1; k < n; k++) {
            
                if ((temp < arr[i] + arr[j] + arr[k]) && (m >= arr[i] + arr[j] + arr[k])) {

                    temp = arr[i] + arr[j] + arr[k];
                }
            }
        }
    }

    printf("%d\n", temp);

    return 0;
}