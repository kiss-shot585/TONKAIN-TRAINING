#include <stdio.h>
#include <stdlib.h>

/*Finds the max amongst three numbers*/
int main()
{
    int a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the max\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the max\n", b);
    }
    else
    {
        printf("%d is the max\n", c);
    }
    return 0;
}
