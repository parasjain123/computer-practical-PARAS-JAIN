#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    float basic, hra, gross, tax, net_salary, ta, enta;
    int level;
    printf("Enter your name - ");
    gets(name);

    printf("Level is - ");
    scanf("%d", &level);

    printf("Basic salary is - ");
    scanf("%f", &basic);

    hra = basic / 4;
    switch (level)
    {
    case 1:
        ta = 7000;
        enta = 3000;
        break;
    case 2:
        ta = 6000;
        enta = 2000;
        break;
    case 3:
        ta = 5000;
        enta = 1500;
        break;
    default:
        break;
    }

    gross = basic + hra + ta + enta;

    if (basic >= 15000 && basic < 20000)
    {
        tax = 0;
    }
    else if (basic >= 20000 && basic < 30000)
    {
        tax = 0.05 * gross;
    }
    else if (basic >= 30000 && basic < 40000)
    {
        tax = 0.08 * gross;
    }
    else if (basic >= 40000 && basic < 60000)
    {
        tax = 0.1 * gross;
    }
    net_salary = gross - tax;
    printf("\n\nEmployee %s\n", name);
    printf("Level %d\n", level);
    printf("Net salary is %f", net_salary);

    return 0;
}
