// Using default arguments, write a function that asks the user for a
// number and returns that number. The function should accept a string
// prompt from the calling code. If the caller doesn’t supply a string for the
// prompt, the function should use a generic prompt. Next, using function
// overloading, write a function that achieves the same results.

#include <iostream>

using namespace std;


//// Part 1
//int repeat(string prompt = "Please enter a number: ");
//
//int main()
//{
//    int number_input = repeat();
//    cout << "You chose " << number_input << ".";
//
//    return 0;
//}
//
//int repeat(string prompt)
//{
//    cout << (prompt);
//    int number;
//    cin >> number;
//
//    return(number);
//}

// Part 2: Use function overloading

int repeat(int number);
int repeat(string text= "Please enter a number: ");

int main()
{
    int number_input = repeat();
    cout << "You chose " << number_input << ".";

    return 0;
}

int repeat(string prompt)
{
    cout << (prompt);
    int number;
    cin >> number;

    return(number);
}