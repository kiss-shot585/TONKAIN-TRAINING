#include <stdio.h>

//corresponding months and numbers

int main ()
{
    int x;
    printf("Enter a number :\n");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("%d corresponds to January", x);
    }
    else if (x == 2)
    {
        printf("%d corresponds to February", x);
    }
    else if (x == 3)
    {
        printf("%d corresponds to March", x);
    }
    else if (x == 4)
    {
        printf("%d corresponds to April", x);
    }
    else if (x == 5)
    {
        printf("%d corresponds to May", x);
    }
    else if (x == 6)
    {
        printf("%d corresponds to June", x);
    }
    else if (x == 7)
    {
        printf("%d corresponds to July", x);
    }
    else if (x == 8)
    {
        printf("%d corresponds to August", x);
    }
    else if (x == 9)
    {
        printf("%d corresponds to September", x);
    }
    else if (x == 10)
    {
        printf("%d corresponds to October", x);
    }
    else if (x == 11)
    {
        printf("%d corresponds to November", x);
    }
    else if (x == 12)
    {
        printf("%d corresponds to December", x);
    }
    else
    {
        printf("Error. Only 12 months in a year and no zero month");
    }

    return 0;
    

}