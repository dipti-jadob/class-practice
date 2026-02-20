#include <stdio.h>
#include <cs50.h>

void print_array(int arr[], int n);

int main(void)
{
    int n = get_int("Size: ");
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element: ");
    }

    print_array(arr, n);

    return 0;
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
       {
        printf("%d ", arr[i]);}

  {
     printf("\n");}
}
