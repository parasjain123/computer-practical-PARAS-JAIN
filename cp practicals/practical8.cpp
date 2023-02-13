#include <stdio.h>
#include <math.h>

int main() {
    float investment_amount, interest_rate, interest, return_amount;
    int years;

    printf("Enter investment amount: ");
    scanf("%f", &investment_amount);
     years=10;
    interest_rate = 7.75;

    interest = investment_amount * interest_rate * years / 100;
    return_amount = investment_amount * pow(1 + interest_rate / 100, years);

    printf("Cumulative return after %d years: %.2f\n", years, return_amount);

    return 0;
}
