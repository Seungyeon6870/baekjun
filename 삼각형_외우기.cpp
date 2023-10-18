#include <iostream>

int main(void) {

    int arr[3] = {};

    for (int i = 0; i < 3; i++) scanf("%d", &arr[i]);

    if (arr[0] + arr[1] + arr[2] != 180) printf("Error\n");
    else if ((arr[0] == arr[1]) && (arr[1] == arr[2])) printf("Equilateral\n");
    else if ((arr[0] == arr[1]) || (arr[0] == arr[2]) || (arr[1] == arr[2])) printf("Isosceles\n");
    else printf("Scalene\n");

    return 0;
}