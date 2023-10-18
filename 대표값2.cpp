#include <iostream>

int main(void) {

    int temp, cnt = 0, avr = 0;
    int arr[6] = {};

    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < 5; i ++) avr += arr[i];
    avr /= 5;

    while (true) {

        for (int i = 0; i < 4; i++) {
            
            if (arr[i] > arr[i + 1]) {

                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }

            else if (arr[i] <= arr[i + 1]) cnt++;
        }

        if (cnt == 4) break;

        cnt = 0;
    }

    printf("%d\n%d\n", avr, arr[2]);

    return 0;
}