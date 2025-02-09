#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b) {
        printf("True\n"); // a is less than b
    } else if (a == b) {
        printf("False\n"); // a is equal to b
    } else {
        printf("False\n"); // a is greater than b
    }

    return 0;
}
