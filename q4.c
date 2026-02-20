#include <stdio.h>
#include <cs50.h>

int square(int n);

int main(void)
{
    int n = get_int("Enter number: ");
    printf("%d\n", square(n));

    return 0;
}

int square(int n)
{
 return n*n;
}
