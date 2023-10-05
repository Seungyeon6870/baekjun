#include <iostream>
#include <stdio.h>

int main(void) {

    char arr[5][15] = {};
    int i, j;

    for (i = 0; i < 5; i++) {

        scanf("%s", &arr[i][j]);
    }

    for (i = 0; i < 15; i++) {

        for (j = 0; j < 5; j++) {
            
            if (arr[j][i] == '\0') continue;

            else printf("%c", arr[j][i]);
        }
    }
    
    printf("\n");

    return 0;
}