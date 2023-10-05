#include <stdio.h>
#include <string.h>

void check(char *parr);

int main(void) {

    char arr[1000000];

    scanf("%s", arr);

    check(arr);

    return 0;
}

void check(char *parr) {

    int i, j, res = 0, temp;
    char c_res, c_temp;

    for (i = 0; i < 26; i++) {

        temp = 0;
        c_temp = i + 65;

        for (j = 0; j < strlen(parr); j++) {

            if (*(parr + j) >= 97 && *(parr + j) <= 122) {

                *(parr + j) -= 32;
            }

            if (i + 65 == *(parr + j)) {

                temp++;
            }
        }

        if (res < temp) {

            res = temp;
            c_res = c_temp;
        }

        else if ((res == temp) && (temp >= 1)) {

            printf("?\n");

            return;
        }
    }

    printf("%c\n", c_res);

    return;
}