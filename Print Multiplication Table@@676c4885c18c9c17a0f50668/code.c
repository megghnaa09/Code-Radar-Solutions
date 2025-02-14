#include<stdio.h>
int main(){
    int a, mul;
    scanf("%d", &a);
    for (int i=1; i<=10; i++){
        mul= a*i;
        printf("%d x %d = %d", a,i,mul);
    }
}