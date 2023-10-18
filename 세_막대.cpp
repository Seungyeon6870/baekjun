#include <iostream>

int main(void) {

    int arr[3] = {};
    int max = 0, a = 0;

    for (int i = 0; i < 3; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < 3; i++) if (max < arr[i]) {
        
        max = arr[i];
        a = i;
    }

    if (max * 2 >= arr[0] + arr[1] + arr[2]) {

        switch (a) {

        case 0:
            printf("%d\n", (arr[1] + arr[2]) * 2 - 1);
            break;

        case 1:
            printf("%d\n", (arr[0] + arr[2]) * 2 - 1);
            break;

        case 2:
            printf("%d\n", (arr[0] + arr[1]) * 2 - 1);
            break;
        }
    }

    else printf("%d\n", arr[0] + arr[1] + arr[2]);

    return 0;
}