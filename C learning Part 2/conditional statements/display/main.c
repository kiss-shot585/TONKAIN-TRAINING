#include <stdio.h>
#include <stdlib.h>

/*takes two integers. Displays one with respect to the value or sign of the other*/

int main()
{
    int m;
    printf("Enter the value of m\n");
    scanf("%d", &m);

    if (m > 0)
    {
        printf("value of n = 1\n");
    }
    else if (m == 0)
    {
        printf("Value of n = 0\n");
    }
    else
    {
        printf("Value of n = -1\n");
    }
    return 0;
}
