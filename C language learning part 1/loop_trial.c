#include <stdio.h>

//let's try testing a loop

int main()
{
    int i;
    for (i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even number is %d\n", i);
        }

        i++;
    }

    return 0;
}