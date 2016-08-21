/*Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic
constants.You should use a separate variable for each input value.A sample
run should look like this:*/

#include <iostream>

int main() {
    double degrees, minutes, seconds;
    const int sec_in_min = 60;
    const int min_in_degree = 3600;
    double ans;

    std::cout << "Enter a latitude in degrees, minutes, and seconds: \n";
    std::cout << "First, enter the degrees: ";
    std::cin >> degrees;
    std::cout << "\nNext, enter the minutes of arc:";
    std::cin >> minutes;
    std::cout << "\nFinally, enter the seconds of arc: ";
    std::cin >> seconds;

    ans = degrees + minutes/sec_in_min + seconds/min_in_degree;
    std::cout << std::endl << degrees << " degrees, " << minutes << " minutes, ";
    std::cout << seconds << " seconds = " << ans << " degrees";

    return 0;
}