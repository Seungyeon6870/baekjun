#include <iostream>
#include <string.h>

int main(void) {

    char arr[1000000000] = {};
    char a, b, temp;
    int cnt = 0;

    scanf("%s", arr);
    
    while (true) {

        for (int i = 0; i < strlen(arr) - 1; i++) {

            if (arr[i] < arr[i + 1]) {

                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }

            else cnt++;
        }

        if (cnt == strlen(arr) - 1) {

            printf("%s\n", arr);
            return 0;
        }

        cnt = 0;
    }
}