#include <stdio.h>
#include <stdlib.h>

/*is the number positive or negative*/
int main()
{
    int a;
    printf("Are you positive or negative? Let us find out.\n");
    printf("Enter a number\n");
    scanf("%d", &a);

    if (a  > 0)
    {
        printf("%d is positive\n", a);
    }
    else
    {
        printf("%d is negative", a);
    }
    return 0;
}
