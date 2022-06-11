#include <stdio.h>
#include <stdlib.h>

/*Takes a coordinate set of point of the form (x,y) and determines in which quadrant it is found*/
int main()
{
    int x, y;
    printf("Enter your points: \n");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf(" (%d, %d) are found in the first quadrant", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf(" (%d, %d) are found in the fourth quadrant", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf(" (%d, %d) are found in the second quadrant", x, y);
    }
    else
    {
        printf(" (%d, %d) are found in the third quadrant", x, y);
    }
    return 0;
}
