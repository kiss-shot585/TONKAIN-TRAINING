#include <stdio.h>
#include <stdlib.h>

/*Voting eligibility*/
int main()
{
    int a;
    printf("Are you eligible to cast a vote? Let us see\n");
    printf("Enter your age\n");
    scanf("%d", &a);

    if (a > 18)
    {
        printf("You got the right to vote\n");
    }
    else
    {
        printf("You are not eligible to vote\n");
    }
    return 0;
}
