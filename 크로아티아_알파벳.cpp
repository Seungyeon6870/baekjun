#include <stdio.h>
#include <string.h>

void check(char *parr);

int main(void) {

    char arr[100];

    scanf("%s", arr);

    check(arr);

    return 0;
}

void check(char *parr) {

    int size = strlen(parr), i;

    for (i = 0; i <= strlen(parr) - 2; i++) {

        if ((parr[i] == 'c') && (parr[i + 1] == '=')) {
            size--;
        }

        else if ((parr[i] == 'c') && (parr[i + 1] == '-')) {
            size--;
        }

        else if ((parr[i] == 'd') && (parr[i + 1] == '-')) {
            size--;
        }

        else if ((parr[i] == 'l') && (parr[i + 1] == 'j')) {
            size--;
        }

        else if ((parr[i] == 'n') && (parr[i + 1] == 'j')) {
            size--;
        }

        else if ((parr[i] == 's') && (parr[i + 1] == '=')) {
            size--;
        }

        else if ((parr[i] == 'z') && (parr[i + 1] == '=')) {

            if ((parr[i - 1] == 'd') && (i > 0)) {

                size -= 2;

                continue;
            }
            
            size--;
        }
    }

    printf("%d\n", size);

    return;
}