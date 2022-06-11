#include <stdio.h>
#include <stdlib.h>

//We shall print the alphabet in lower and upper case using putchar
int main()
{
    char low;

    for (low = 'a'; low <= 'z'; low++)
    {
        putchar(low);
    }
    for (low = 'A'; low <= 'Z'; low++)
    {
        putchar(low);
    }
    putchar('\n');
    return 0;
}
