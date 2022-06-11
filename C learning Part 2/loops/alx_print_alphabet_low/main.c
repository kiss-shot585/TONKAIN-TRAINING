#include <stdio.h>
#include <stdlib.h>

//We shall print the alphabet in lower case using putchar
int main()
{
    char low;

    for (low = 'a'; low <= 'z'; low++)
    {
        putchar(low);
    }
    putchar('\n');
    return 0;
}
