#include <stdio.h>
int main(){
    const float pie = 3.14;
    int radius;
    float area;
    scanf("%d",&radius);
    area = pie *radius* radius;
    printf("Area: %.2f", area);
    return 0;

}