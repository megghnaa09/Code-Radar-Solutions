#include <stdio.h>
int main(){
    const float pie = 3.14;
    float radius;
    float area;
    scanf("%d",&radius);
    area = pie *radius* radius;
    printf("Area: %.2f", area);
    return 0;

}