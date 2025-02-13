#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c\n", ch);
    } else {
        printf("%c\n", ch);
    }

    return 0;
}
