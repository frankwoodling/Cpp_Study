// Write a program with a pointer to a pointer to a string object. Use
// the pointer to the pointer to call the size() member function of
// the string object.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string* pString1;
    string** pString2;
    string stringObject = "String object\n";
    pString1 = &stringObject;
    pString2 = &pString1;

    cout << "Size is: " << (**pString2).size() << "\n";

    return 0;
}