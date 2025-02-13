#include <stdio.h>
int main(){
    int a,b,c;
    if (a>=18 && b==1){
        printf("Eligible");
    }else if ((a==20) || (a==25)){printf("Eligible");}
    else{printf("Not Eligible");}
    return 0;
}