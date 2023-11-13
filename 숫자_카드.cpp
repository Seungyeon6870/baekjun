#include <stdio.h>

int main(void) {

    int n, m;
    int *p1 = (int)malloc(sizeof(int));
    int *p2 = (int)malloc(sizeof(int));

    scanf("%d", &n);
    p1 = (int)realloc(n * sizeof(int));

    for (int i = 0; i < n; i++) scanf("%d", &p1[i]);

    scanf("%d", &m);

    p2 = (int)realloc(m * sizeof(int));

    for (int i = 0; i < m; i++) scanf("%d", &p2[i]);

    return 0;
}