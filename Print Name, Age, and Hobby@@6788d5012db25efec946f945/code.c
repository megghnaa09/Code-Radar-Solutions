#include <stdio.h>
int main(){
    char name[50];
    int age;
    char hobby[50];
    scanf("%s %d %s", &name, &age, &hobby);
    printf("Name: %s", name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s", hobby);
    return 0;
}