#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n", ch);
    } else {
        printf("Lowercase\n", ch);
    }

    return 0;
}
