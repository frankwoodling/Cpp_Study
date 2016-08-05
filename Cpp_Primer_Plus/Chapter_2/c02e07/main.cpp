// Displays time from hours and minutes

#include <iostream>
using std::cout;
using std::cin;


void print_time(int, int);

int main()
{
    int hours;
    int minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << std::endl << "Enter the number of minutes: ";
    cin >> minutes;
    print_time(hours, minutes);

    return 0;
}

void print_time(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes;
}