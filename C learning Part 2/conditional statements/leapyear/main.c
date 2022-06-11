#include <stdio.h>
#include <stdlib.h>

/*program to check if a year is a leap year*/
int main()
{
    int year;
    printf("let us check if the year is a leap year\n");
    printf("Enter a year: \n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year\n", year);
    }
    else if (year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
