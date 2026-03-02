#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randomNumber = ((rand() % 100) +1);
    int guessNumber;

    cout << "Guess a random number between 1 - 100" << endl;
    cin >> guessNumber;
    
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
    }

    cout << "Congratulations. You figured out my number." << endl;

    return 0;

}