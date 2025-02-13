#include <stdio.h>
#include <string.h>

int main() {
    char word;;
    scanf("%c", &word);
    if (strchr("aeiouAEIOU", word)) {
        printf("Vowel\n");
    }
    else if ((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z')) {
        printf("Consonant\n");
    }
    else if (word >= '0' && word <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }

    return 0;
}
