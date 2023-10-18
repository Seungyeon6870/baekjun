#include <iostream>

void merge_sort(int left, int right, int *ptr,int *temp_ptr);
void merge(int left, int middle, int right, int *ptr, int *temp_ptr);

int main(void) {

    int n, temp[1000000] = {}, arr[1000000] = {};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    merge_sort(0, n - 1, arr, temp);

    for (int i = 0; i < n; i++) printf("%d\n", arr[i]);

    return 0;
}

void merge_sort(int left, int right, int *ptr, int *temp_ptr) {

    if (left < right) {

        int middle = (left + right) / 2;

        merge_sort(left, middle, ptr, temp_ptr);
        merge_sort(middle + 1, right, ptr, temp_ptr);
        merge(left, middle, right, ptr, temp_ptr);
    }

    return;
}

void merge(int left, int middle, int right, int *ptr, int *temp_ptr) {

    int i = left, j = middle + 1, k = left;

    while (i <= middle && j <= right) {

        if (ptr[i] <= ptr[j]) temp_ptr[k++] = ptr[i++];
        else temp_ptr[k++] = ptr[j++];
    }

    if (i > middle) for (int l = j; l <= right; l++) temp_ptr[k++] = ptr[l];
    else for (int l = i; l <= middle; l++) temp_ptr[k++] = ptr[l];

    for (int l = left; l <= right; l++) ptr[l] = temp_ptr[l];

    return;
}