#include <stdio.h>
#include <string.h>

int check(char *parr);

int main(void) {

    char arr[101];

    scanf("%s", arr);

    printf("%d\n", check(arr));

    return 0;
}

int check(char *parr) {

    int i, size = strlen(parr);

    for (i = 0; i < size / 2; i++) {

        if (*(parr + i) != *(parr + (size - i - 1))) {

            return 0;
        }
    }

    return 1;
}