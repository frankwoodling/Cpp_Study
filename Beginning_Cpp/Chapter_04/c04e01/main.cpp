// Chapter 4, Excercise 1
//  Write a program using vectors and iterators that allows a user to maintain a list
// of his or her favorite games. The program should allow the user to list all game
// titles, add a game title, and remove a game title.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Create a vector to store names of games, and add some examples
    vector <string> game_list;
    game_list.push_back("Mario");
    game_list.push_back("Zelda");
    game_list.push_back("Metroid");

    // Create an iterator to index through the list
    vector<string>::iterator game_iter;

    // Initialize commands user can select
    string input, add, remove;

    cout << "\nYou can add to, remove from, or display a list of favorite games" << endl;
    cout << "Type 'quit' to quit, 'add' to add, 'remove' to remove a title, or 'list' to list titles, or ." << endl;
    cout << "\nEnter your selection: ";
    cin >> input;

// Loops runs until user types quit
while (input != "quit")
    if (input == "add")
    {
        cout << "Enter a game title to add to your list: ";
        cin >> add;
        cout << "\nEnter your selection: ";
        game_list.push_back(add);
        cin >> input;
    }

    else if (input == "remove")
    {
        cout << "Enter a game title to remove from your list: ";
        cin >> remove;

        // iterator searches through the vector to find the title to remove
        vector<string>::iterator remove_iter= find(game_list.begin(), game_list.end(), remove);

        if (remove_iter == game_list.end())
        {
            cout << remove << " is not in the list." << endl;
        }

        else
        {
        cout << "Removed " << *remove_iter << " from the list." << endl;
        game_list.erase(remove_iter);
        }

        cout << "\nEnter your selection: ";
        cin >> input;
    }

    else if (input == "list")
    {
        cout << "\nList of your favorite games: " << endl;

        // search through list and print each element to console
        for (game_iter = game_list.begin(); game_iter != game_list.end(); ++game_iter)
        {
            cout << *game_iter << endl;
        }

        cout << "\nEnter your selection: ";
        cin >> input;
    }

    else if (input == "quit"){}

    else
    {
        cout << "\nInvalid selection. Please try again." << endl;
        cout << "You may type add, remove, list, or quit." << endl;
        cout << "\nEnter your selection: ";
        cin >> input;
    }
}