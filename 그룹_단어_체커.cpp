#include <iostream>
#include <stdio.h>
#include <string.h>

void checker(char *parr, int size, int *pn);

int main(void) {

    int i, j = 0, str_num, group_num = 0;
    char temp[100];

    scanf("%d", &str_num);

    for (i = 0; i < str_num; i++) {

        scanf("%s", temp);

        checker(temp, strlen(temp), &group_num);

        while (true) {

            if (temp[j] == '\0') {

                break;
            }

            temp[j] = '/n';

            j++;
        }
    }

    printf("%d\n", group_num);

    return 0;
}

void checker(char *parr, int size, int *pn) {

    int i, j;

    for (i = 0; i < size - 1; i++) {

        if (*(parr + i) == *(parr + i + 1)) continue;
        
        for (j = i + 1; j < size; j++) {

            if (*(parr + i) == *(parr + j)) {

                return;
            }
        }
    }

    *pn += 1;

    return;
}