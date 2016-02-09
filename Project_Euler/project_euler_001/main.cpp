// Multiples of 3s and 5s
// If we list all the natural numbers below 10 that are multiples of 3 or 5,
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
//
// Using iterators to complete the problem.
// C++, 2/9/15

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // max_num defines the maximum number to search for multiples in
    int max_num = 1000;

    // sum keeps track of the sum of multiples of 3 and 5
    int sum = 0;

    // creates a vector and an iterator to sort through the vector
    vector<int> numbers;
    vector<int>::iterator numIter;

    // populate a vector from 1 to the defined max
    for(int i = 1; i < max_num; ++i)
    {
        numbers.push_back(i);
    }

    // determine if each number is a multiple of 3 or 5
    for(numIter = numbers.begin(); numIter != numbers.end(); ++numIter)
    {
        if ((*numIter % 3 == 0) || (*numIter % 5 == 0) )
        {
            sum = sum + *numIter;
        }
    }
    cout << "\nThe sum of all multiples of 3s and 5s is: " << sum << endl;

    return 0;
}