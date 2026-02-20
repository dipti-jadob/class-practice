#include <stdio.h>
#include <cs50.h>

int tempAdvisor(int temp, int fan);

int main(void)
{
    int temp = get_int("Temperature: ");
    int fan = get_int("Fan (1=ON, 0=OFF): ");

    int code = tempAdvisor(temp, fan);

    if (code == 1)
        printf("Turn ON the fan\n");
    else if (code == 2)
        printf("Temperature is normal\n");
    else if (code == 3)
        printf("Turn ON fan immediately\n");
    else if (code == 4)
        printf("Fan already running\n");
    else
        printf("No action needed\n");

    return 0;
}

int tempAdvisor(int temp, int fan)
{
    if (temp < 20 && fan == 0)
        return 1;
    else if (temp < 20 && fan == 1)
        return 4;
    else if (temp >= 20 && temp <= 30)
        return 2;
    else if (temp > 30 && fan == 0)
        return 3;
    else
        return 0;
}
