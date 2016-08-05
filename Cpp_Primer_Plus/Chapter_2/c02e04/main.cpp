#include <iostream>
#include <cmath>

int convert_years_to_months(int);
int years;

int main()
{
    int years;
    int months;

    std::cout << "Enter your age in years.";
    std::cin >> years;
    months = convert_years_to_months(years);
    std::cout << "You are " << months << " months old.";
}

int convert_years_to_months(int years)
{
    return(years*12);
}