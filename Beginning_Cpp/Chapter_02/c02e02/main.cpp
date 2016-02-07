// Q: What is wrong with the following loop?
// A: The loop will never reach zero since it adds 1 each iteration.
//    Since x will never be 0, the loop will loop infinitely.

#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    while (x)
    {
        ++x;
        cout << x << endl;
    }
    return 0;
}