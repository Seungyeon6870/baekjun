#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char **p = (char **)malloc(sizeof(char *));
    char *temp;
    int n, cnt = 0;

    scanf("%d", &n);

    p = (char **)realloc(p, n * sizeof(char *));
    
    for (int i = 0; i < n; i++) {
        
        p[i] = (char *)malloc(51 * sizeof(char));
        scanf("%s", p[i]);
    }

    while (cnt != n - 1) {

        cnt = 0;

        for (int i = 0; i < n - 1; i++) {

            if (strlen(p[i]) > strlen(p[i + 1])) {

                temp = p[i];
                p[i] = p[i + 1];
                p[i + 1] = p[i];
            }

            else cnt++;
        }
    }

    for (int i = 0; i < n; i++) printf("%s\n", p[i]);

    return 0;
}