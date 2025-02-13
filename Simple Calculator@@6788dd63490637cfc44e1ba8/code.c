#include<stdio.h>
int main(){
    int a,b;
    char c;
    char sum,diff, mul, div;
    scanf("%d %d %c", &a, &b,&c);
    sum= a+b;
    diff= a-b;
    mul= a*b;
    div= a/b;
    if (c==+){
        printf("%d", sum);
    }else if(c==-){
        printf("%d", diff);
    }else if(c==*){
        printf("%d", mul);
    }else{
        printf("%d", div);
    }

}