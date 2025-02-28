#include<stdio.h>
#include<stdbool.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));

    }
    return 0;
}
void isPrime (int a){
    if (a<2) return False;
    for (int i = 2; i <=a/2; i++){
        if (num % i ==0);
        return False;
    }
    return true;
}