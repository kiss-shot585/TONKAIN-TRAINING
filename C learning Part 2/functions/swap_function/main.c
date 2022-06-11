#include <stdio.h>
#include <stdlib.h>

void swap (int a, int b);
int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);

    swap(x, y);
    return 0;
}

void swap(int a, int b)
{
    int temp;
    printf("Before swapping n1 = %d and n2 = %d \n", a, b);
    temp = a;
    a = b;
    b = temp;

    printf("Final swapping n1 = %d and n2 = %d\n", a, b);
}
