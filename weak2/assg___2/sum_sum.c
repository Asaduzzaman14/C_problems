#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    int pos_sum = 0, neg_sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
 
        if (a[i] < 0)
        {
            neg_sum = neg_sum + a[i];
        }
        else
        {
            pos_sum = pos_sum + a[i];
        }
    }
    printf("%d ", pos_sum);
    printf("%d ", neg_sum);

    return 0;
}