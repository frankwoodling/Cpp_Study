// Convert Celsius to Fahrenheit

#include <iostream>
double celsius_to_fahrenheit(double);

int main()
{
    double celsius;
    double fahrenheit;

    std::cout << "Enter a temperature in Celsius." << std::endl;
    std::cin >> celsius;
    fahrenheit = celsius_to_fahrenheit(celsius);
    std::cout << celsius << " degrees Celsius is equal to ";
    std::cout << fahrenheit << " degrees Fahrenheit.";

    return 0;
}

double celsius_to_fahrenheit(double celsius)
{
    return 1.8 * celsius + 32.0;
}