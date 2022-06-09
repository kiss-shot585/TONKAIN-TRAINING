#include <stdio.h>
//check range of number
//print error message if number is greater than 80 and negative

int main ()
{
    int z;
    printf("Enter any number :\n");
    scanf("%d", &z);

    if (z > 80 || z < 0)
    {
        printf(" Error wrong number entered");
    }
    else if (z >= 0 && z <= 20)
    {
        printf("z belongs to the range [0, 20]");
    }
    else if (z > 20 && z <= 40)
    {
        printf("z belongs to the range ]20, 40]");
    }
    else if (z > 40 && z <= 60)
    {
        printf("z belongs to the range ]40, 60] ");
    }

    return 0;
}