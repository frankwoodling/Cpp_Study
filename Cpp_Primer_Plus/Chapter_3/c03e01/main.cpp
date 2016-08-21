// Write a short program that asks for your height in integer inches and then converts
// your height to feet and inches. Have the program use the underscore character to
// indicate where to type the response. Also use a const symbolic constant to represent
// the conversion factor.

#include <iostream>

int main() {
    const int inches_in_ft = 12;
    int inches, feet, inches_rem;
    std::cout << "Enter your height in inches ______\b\b\b\b\b";
    std::cin >> inches;

    feet = inches/inches_in_ft;
    inches_rem = inches%inches_in_ft;

    std::cout << "You are " << feet << " feet and " << inches_rem << " inches.";

    return 0;
}