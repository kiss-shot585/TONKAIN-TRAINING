#include <stdio.h>
#include <stdlib.h>

/*Checking whether an integer are even or odd*/
int main()
{
    int a;
    printf("Let us see if it is even or odd\n");
    scanf("%d", &a);

    if (0 == a % 2)
    {
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }
    return 0;
}
