#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i > 1)
                printf(" ");
            printf("%d", i);
        }
    }
    else
    {

        for (int i = n; i <= 0; i++)
        {
            if (i != n)
                printf(" ");
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}