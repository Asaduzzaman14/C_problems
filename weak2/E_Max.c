#include <stdio.h>
#include <limits.h>

int main()
{
    int number;
    scanf("%d", &number);
    int mx = INT_MIN;
    
    for (int i = 1; i <= number; i++)
    {
        int val;
        scanf("%d", &val);

        if (val  > mx)
        {
            mx = val;
        }
    }
    printf("%d", mx);
    return 0;
}