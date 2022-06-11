#include <stdio.h>
#include <stdlib.h>

//We shall print the alphabet in lower case excluding q and e
int main()
{
    char low;

    for (low = 'a'; low <= 'z'; low++)
    {
        if (low != 'q' && low != 'e')
        {
            putchar(low);
        }
    }
    putchar('\n');
    return 0;
}
