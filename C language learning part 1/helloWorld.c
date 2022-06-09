#include <stdio.h>
//this program prints the following info on you
//your name, date of birth, phone number

int main()
{
    int phone_number; //variable to store your phone number
    char DOB; //variable to store your date of birth
    char name [50]; // variable to store your name

    printf("Enter your name :\n");
    scanf("%s", name);
    printf("this is your name: %s", name);
}