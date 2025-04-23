#include<stdio.h>

int main(){

    int a = 44;
    int b = 22;

    a = b;
    b = a;
 
    printf("%d %d", a, b);
    return 0;

}