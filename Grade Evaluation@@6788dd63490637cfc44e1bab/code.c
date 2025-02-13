#include<stdio.h>
int main(){
    char grade;
    scanf("%c",&grade);
    if (grade=='A'){
        printf("Excellent");
    }else{
        printf("Invalid grade");
    }
}