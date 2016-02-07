#include <iostream>
using namespace std;

int main()
{
    double first, second, third;
    cout << "Program will average 3 given numbers." << endl;

    cout << "Enter the first number.  ";
    cin >> first;

    cout << "\nEnter the second number.  ";
    cin >> second;

    cout << "\nEnter the first number.  ";
    cin >> third;

    cout << "\nThe mean is " << (first + second + third)/3;

    return 0;
}