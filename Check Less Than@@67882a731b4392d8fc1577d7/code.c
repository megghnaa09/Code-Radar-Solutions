#include <stdio.h>

int main() {
    int a, b;

    // Prompt the user to enter two integers
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &a, &b);

    // Check if a < b or if a == b
    if (a < b) {
        printf("true\n"); // a is less than b
    } else if (a == b) {
        printf("true\n"); // a is equal to b
    } else {
        printf("false\n"); // a is greater than b
    }

    return 0;
}
