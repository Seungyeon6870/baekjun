#include <stdio.h>
#include <stdlib.h>

void merge_sort(int left, int right, int **p, int **temp);
void merge(int left, int middle, int right, int **p, int **temp);

int main(void) {

    int n;
    int **p = (int **)malloc(sizeof(int *));
    int **temp = (int **)malloc(sizeof(int *));

    scanf("%d", &n);

    p = (int **)realloc(p, n * sizeof(int *));
    temp = (int **)realloc(p, n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        
        p[i] = (int *)malloc(2 * sizeof(int));
        temp[i] = (int *)malloc(2 * sizeof(int));
        scanf("%d %d", &p[i][0], &p[i][1]);
    }

    merge_sort(0, n - 1, p, temp);

    for (int i = 0; i < n; i++) printf("%d %d\n", p[i][0], p[i][1]);

    return 0;
}

void merge_sort(int left, int right, int **p, int **temp) {

    if (left < right) {

        int middle = (left + right) / 2;

        merge_sort(left, middle, p, temp);
        merge_sort(middle + 1, right, p, temp);
        merge(left, middle, right, p, temp);
    }

    return;
}

void merge(int left, int middle, int right, int **p, int **temp) {


    int i = left, j = middle + 1, k = left;

    while (i <= middle && j <= right) {

        if (p[i][0] <= p[j][0] && p[i][1] <= p[j][1]) temp[k++] = p[i++];
        else temp[k++] = p[j++];
    }

    if (i > middle) for (int l = j; l <= right; l++) temp[k++] = p[l];
    else for (int l = i; l <= middle; l++) temp[k++] = p[l];

    for (int l = left; l <= right; l++) p[l] = temp[l];

    return;
}