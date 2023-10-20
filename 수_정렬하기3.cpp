#include <iostream>

int main(void) {

    int n;
    int arr[10000000] = {}, result_arr[10000000] = {}, max = 0, num = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
    
        scanf("%d", &arr[i]);

        if (max < arr[i]) max = arr[i];
    }

    int *counting_arr = (int*)malloc((max + 1) * sizeof(int));
    
    for (int i = 0; i <= max; i++) counting_arr[i] = 0;

    for (int i = 0; i < n; i++) counting_arr[arr[i]]++;
    for (int i = 0; i < 10001; i++) {

        num += counting_arr[i];
        counting_arr[i] = num;
    }

    for (int i = 0; i < n; i++) {

        result_arr[counting_arr[arr[i]]] = arr[i];
        counting_arr[arr[i]]--;
    }

    for (int i = 0; i < n; i++) printf("%d", result_arr[i]);

    free(counting_arr);

    return 0;
}