#include <iostream>

using namespace std;

int main()
{
    int integer, maxInteger, minInteger;

    cout << "Enter a series of integers" << endl;
    cout << "Place -99 after the list to stop" << endl;

    cin >> integer;

    if (integer == -99)
    {
        cout << "No numbers entered." << endl;

        return 0;
    }

    maxInteger = integer;
    minInteger = integer;

    while (integer != -99)
    {
        if (integer < minInteger)
            minInteger = integer;
        
        if (integer > maxInteger)
            maxInteger = integer;

        cin >> integer;
    }

    cout<< "Smallest Number: " << minInteger << endl;
    cout << "Largest Number: " << maxInteger << endl;

    return 0;
}

