#include <stdio.h>
#include <math.h>
int main()
{
    int digit = 0, rem, i1, i2;
    float sum = 0.0;
    for (int i = 2; i <= 1000; i++)
    {
        i1 = i;
        i2 = i;
        while (i1 != 0)
        {
            i1 /= 10;
            digit++;
        }
        while (i2 != 0)
        {
            rem = i2 % 10;
            sum += pow(rem, digit);
            i2 /= 10;
        }
        if ((int)sum == i)
        {
            printf("%d is an Armstrong Numbers\n", i);
        }
        digit = 0;
        sum = 0;
    }
    return 0;
}