#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Verifies if the last digit of a number is greater than 5, equals 0 or less than 6
int main()
{
    int n;
    int m;
    srand(time(0));
    n = rand() - RAND_MAX/2;
    m = n % 10;

    if (m > 5)
    {
        printf("The last digit of %d is %d and is greater than 5\n", n, m);
    }
    else if (m == 0)
    {
        printf("The last digit of %d is %d and is equal to 5\n", n, m);
    }
    else if (m < 6)
    {
        printf("The last digit of %d is %d and is less than 6\n", n, m);
    }
    return 0;
}
