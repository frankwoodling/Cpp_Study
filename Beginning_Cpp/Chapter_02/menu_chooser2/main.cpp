// Menu Chooser 2.0
// User picks a number, and computer guesses what it is

#include <iostream>


int main()
{
    int secret;
    int tries = 0;
    int guess = 50;
    int upper = 101;
    int lower = 0;

    std::cout << "Pick an integer between 0 and 100." << std::endl;
    std::cout << "The computer will attempt to guess your number.\n\n";
    std::cout << "Your number: ";
    std::cin >> secret;

    while (guess != secret)
    {
        ++tries;
        std::cout << "Computer guesses " << guess << ".";
        if (guess > secret)
        {
            std::cout << " Too high." << std::endl;
            upper = guess;
            guess = (upper + lower) / 2;
        }
        else if (guess < secret)
        {
            std::cout << " Too low." << std::endl;
            lower = guess;
            guess = (upper + lower) / 2;
        }
    }

    std::cout << "\n\nComputer guessed " << guess << ". " ;
    std::cout << "It did it in " << tries << " tries." << std::endl;

    return 0;
}



// Old code with using namespace std;

/*
using namespace std;

int main()
{
    int secret;
    int tries = 0;
    int guess = 50;
    int upper = 101;
    int lower = 0;

    cout << "Pick an integer between 0 and 100." << endl;
    cout << "The computer will attempt to guess your number.\n\n";
    cout << "Your number: ";
    cin >> secret;

    while (guess != secret)
    {
        ++tries;
        cout << "Computer guesses " << guess << ".";
        if (guess > secret)
        {
            cout << " Too high." << endl;
            upper = guess;
            guess = (upper + lower) / 2;
        }
        else if (guess < secret)
        {
            cout << " Too low." << endl;
            lower = guess;
            guess = (upper + lower) / 2;
        }
    }

    cout << "\n\nComputer guessed " << guess << ". " ;
    cout << "It did it in " << tries << " tries." << endl;

    return 0;
}*/
