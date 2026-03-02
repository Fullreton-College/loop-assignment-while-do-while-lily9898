#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randomNumber = ((rand() % 100) +1);
    int guessNumber, guessTimes;

    cout << "Guess a random number between 1 - 100" << endl;
    cin >> guessNumber;

    guessTimes = 1;
    
    while (guessNumber != randomNumber)
    {
        if (guessNumber < randomNumber)
        {
            cout << "Too low. Try again." << endl;
        }
        else if (guessNumber > randomNumber)
        {
            cout << "Too high. Try again." << endl;
        }
        
        cin >> guessNumber;
        guessTimes += 1;
    }

    cout << "Congratulations. You figured out my number." << endl;
    cout << "Your number of guesses:" << guessTimes << endl;

    return 0;

}