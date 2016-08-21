/*Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.*/

#include <iostream>

int main(){
    double feet, inches, lbs, height_inches, height_meters, mass_kg;
    const double inches_per_foot = 12;
    const double inches_to_meters = 0.0254;
    const double lb_to_kg = 2.2;

    std::cout << "Enter your height in feet and inches: " << std::endl << "feet: ";
    std::cin >> feet;
    std::cout << std::endl << "inches: ";
    std::cin >> inches;
    std::cout << "Enter your weight in pounds: " << std::endl << "pounds: ";
    std::cin >> lbs;


    height_inches = inches_per_foot*feet+inches;
    height_meters = height_inches*inches_to_meters;
    mass_kg = lbs/lb_to_kg;
    std::cout << std::endl << "Your BMI is: " << mass_kg/(height_meters*height_meters);

    return 0;
}