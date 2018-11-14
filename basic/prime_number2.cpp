#include <iostream>

using namespace std;

// C++ Program to Print next Prime number

int main()
{
    int ii, jj = 2, number;

    cout << "Enter any number: ";
    cin >> number;

    cout << "Next primer number: ";

    for (ii = number+1; ii < 3000; ii++) 
    {
        for (jj = 2; jj < ii; jj++)
        {
            if (ii%jj == 0)
                break;
        }

        if (ii == jj || ii == 1)
        {
            cout << "\t" << ii << endl;
            break;
        }
    }

    return 0;
}