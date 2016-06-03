#include <iostream>
#include <cmath>

// Compare implementations of insertion sort and merge sort on the same machine.
// For inputs of size n, insertion sort runs in 8n^2 steps while merge sort runs in 64n lg n steps.
// For which values of n does insertion sort beat merge sort?

using namespace std;

int main()
{
    int n = 2;

    for(; 8*pow(n, 2) < 64*n*log(n); n = n + 1)
    {
        cout << n << endl;
    }
    return n;
}

//int main()
//{
//    int n = 2;
//
//    while (8 * pow(n, 2) < 64 * n * log(n))
//    {
//        n += 1;
//        cout << n << endl;
//    }
//    return n;
//}

// Answer should be 44.  Why do I keep getting 26/27 with both my for loop and while loop?