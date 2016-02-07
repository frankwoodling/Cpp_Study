// Chapter 2, Exercise 1
// Menu Chooser with enumeration

#include <iostream>
using namespace std;

int main()
{
    int choice;

    enum difficulty {Easy = 1, Normal, Hard};
    difficulty difficulty_choice;
    difficulty_choice == choice;

    cout << "Difficulty Levels\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";

    cout << "Choice: ";
    cin >> choice;


    switch(choice)
    {
        case Easy:
            cout << "You picked Easy.\n";
            break;
        case Normal:
            cout << "You picked Normal.\n";
            break;
        case Hard:
            cout << "You picked Hard.\n";
        default:
            cout << "You made an illegal choice.\n";
    }
    return 0;
}