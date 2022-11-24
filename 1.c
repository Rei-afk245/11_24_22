#include <stdio.h>
int main()
{
    int num, sum = 0, div;
    for (int i = 1, u = 1; i <= 1000; i++)
    {
        for (int u = 1; u < i; u++)
        {
            if (i % u == 0)
            {
                sum += u;
            }
        }
        if (sum == i)
        {
            printf("%d is a perfect number\n", i);
        }
        sum = 0;
    }
    return 0;
}