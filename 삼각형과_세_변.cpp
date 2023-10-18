#include <iostream>

int main(void) {

    int arr[3] = {};
    int max;

    while (true) {

        for (int i = 0; i < 3; i++) scanf("%d", &arr[i]);

        if ((arr[0] == 0) && (arr[1] == 0) && (arr[2] == 0)) return 0;

        for (int i = 0; i < 3; i++) if (max < arr[i]) max = arr[i];
        
        if (max * 2 >= arr[0] + arr[1] + arr[2]) printf("Invalid\n");
        else if ((arr[0] == arr[1]) && (arr[1] == arr[2])) printf("Equilateral\n");
        else if ((arr[0] == arr[1]) || (arr[0] == arr[2]) || (arr[1] == arr[2])) printf("Isosceles\n");
        else printf("Scalene\n");

        max = 0;
    }
}