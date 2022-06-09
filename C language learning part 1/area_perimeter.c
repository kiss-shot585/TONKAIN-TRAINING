#include <stdio.h>
//We shall calculate the area and perimeter of a rectangle

int main()
{
    int length, width, area, perimeter;

    printf("Enter the length :\n");
    scanf("%d", &length);

    printf("Enter the width ;\n");
    scanf("%d", &width);

    area = length * width;
    perimeter = (length + width) * 2;

    printf("The area is %d and the perimeter is %d", area, perimeter);

    return 0;


}