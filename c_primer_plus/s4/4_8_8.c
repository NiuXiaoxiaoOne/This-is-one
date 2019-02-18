#include <stdio.h>
int main(void)
{
    double mileage;
    double amount_of_gasoline;
    const double change = 3.785 / (1.609 * 100);

    printf("Enter your mileage of travel: ");
    scanf("%lf", &mileage);
    printf("Enter your amount of gasoline: ");
    scanf("%lf", &amount_of_gasoline);

    printf("Miles consumed per gallon of gasoline: %.1f.\n", amount_of_gasoline / mileage);
    printf("or %.1f L/100KM.\n", amount_of_gasoline / mileage * change);

    return 0;
}
