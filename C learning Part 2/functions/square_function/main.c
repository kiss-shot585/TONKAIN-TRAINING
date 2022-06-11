#include <stdio.h>
#include <stdlib.h>

int square (int x);
int main()
{
    int a, c;
    printf("Enter any value\n");
    scanf("%d", &a);

    c = square(a);
    printf("The square of %d is %d", a, c);
    return 0;
}

int square (int x)
{
    return (x * x);
}
