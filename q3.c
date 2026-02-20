#include <stdio.h>
#include <cs50.h>

 void check_even(int n);

int main(void)
{
    int n = get_int("Enter number: ");
    check_even(n);

    return 0;
}

void check_even(int n)
{
    if(n % 2 == 0)
    {
        printf("Even\n");
    }

    else
    {
        printf("ODD\n");
    }
}
