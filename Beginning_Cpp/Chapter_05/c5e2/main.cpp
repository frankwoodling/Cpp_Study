// Hangman with functions
// Rewrite the Hangman game from Chapter 4 using functions. Include a
// function to get the player’s guess and another function to determine
// whether the player’s guess is in the secret word.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

char guessLetter();
char checkGuess(char, char);

int main()
{
    const int MAX_WRONG = 8;  // maximum number of incorrect guesses allowed

    vector<string> words;  // collection of possible words to guess
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());

    // word to guess
    const string THE_WORD = words[0];

    // number of incorrect guesses
    int wrong = 0;

    // word guessed so far
    string soFar(THE_WORD.size(), '-');

    // letters already guessed
    string used = "";

    cout << "Welcome to Hangman. Good luck!\n";
    cout << soFar;

    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\nYou have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is:\n" << soFar << endl;

        char guess;
        guess = guessLetter();

        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            guess = guessLetter();
        }

        used += guess;

        checkGuess()
        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " is in the word.\n";

            // update soFar to include the newly guessed letter
            for (int i = 0; i < THE_WORD.length(); ++i)
            {
                if (THE_WORD[i] == guess)
                {
                    soFar[i] = guess;
                }
            }
        }
        else
        {
            cout << "Sorry, " << guess << " isn't in the word.\n";
            ++wrong;
        }
    }

    // shut down
    if (wrong == MAX_WRONG)
    {
        cout << "\nYou've been hanged!";
    }
    else
    {
        cout << "\nYou guessed it!";
    }

    cout << "\nThe word was " << THE_WORD << endl;

    return 0;
}

char guessLetter()
{
    char guess;
    cout << "\n\nEnter your guess: ";
    cin >> guess;

    // make uppercase since secret word is uppercase
    guess = toupper(guess);

    return(guess);
}

string checkGuess(string prompt)
{

}