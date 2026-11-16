#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int SIZE = 5;

    int winningDigits[SIZE];
    int player[SIZE];
    int matchCount = 0;
    // Seed the random number generator once.
    srand(static_cast<unsigned int>(time(0)));

    // Generate five random winning digits.
    for (int i = 0; i < SIZE; i++)
    {
        winningDigits[i] = rand() % 10;
    }
    // Ask the player to enter five digits.
    cout << "Enter five digits (0-9):" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter digit " << i + 1 << ": ";
        cin >> player[i];
    }
   // Compare digits in corresponding positions.
    for (int i = 0; i < SIZE; i++)
    {
        if (winningDigits[i] == player[i])
        {
            matchCount++;
        }
    }
  // Display the winning digits.
    cout << "\nWinning digits: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << winningDigits[i] << " ";
    }
  // Display the player's digits.
    cout << "\nYour digits: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << player[i] << " ";
    }
  // Display the total number of matches.
    cout << "\nNumber of matches: " << matchCount << endl;

    return 0;
}




