#include <stdio.h>
#include <cs50.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    printf("%d\n", add(a, b));
    return 0;
}
