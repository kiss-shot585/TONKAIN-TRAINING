#include <stdio.h>
#include <stdlib.h>

/*Program to check if 2 integers are equal or not*/
int main()
{
    int a, b;

    printf("Are these two integers equal or not? Let us find out\n");
    printf("Enter two integers\n");
    scanf("%d%d", &a, &b);

    if (a == b)
    {
        printf("a equals b", a, b);
    }
    else
    {
        printf("Naaah. Can't be equal");
    }
    return 0;
}
