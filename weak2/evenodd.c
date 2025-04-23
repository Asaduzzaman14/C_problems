
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int firstNum = n / 1000;  
 
    if (firstNum % 2 == 0)   
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}
 