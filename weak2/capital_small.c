#include <stdio.h>
int main()
{
    char data;

    scanf("%c", &data);

    if (data >= '0' && data <= '9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");

        if(data >= 'a' && data<='z'){
            printf("IS SMALL");
        }
        else {
            printf("IS CAPITAL");
        }
    }

    return 0;
}