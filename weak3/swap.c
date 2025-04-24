#include<stdio.h>

int main(){

    int a = 44;
    int b = 22;
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
 
    printf("%d %d", a, b);
    return 0;

}