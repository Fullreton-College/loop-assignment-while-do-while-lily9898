#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double membership = 3000.00;
    
    cout << fixed << setprecision(2);

    cout << "The projected rates for the next five years are the following: " << endl;

    for (int year = 1; year <= 5; year++)
    {
        membership = membership * 1.03;
        cout << "Year " << year << ": $" << membership << endl;
    }

    return 0;
}