#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i * i <= n; i++) { // Check divisibility up to sqrt(n)
            if (n % i == 0) {
                isPrime = 0; // If divisible, it's not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime", n);
    } else {
        printf("Not Prime\n", n);
    }

    return 0;
}

