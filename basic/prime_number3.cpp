#include <iostream>
#include <iomanip> // std::setw

using namespace std;

// C++ program to find prime numbers in a given range

int main()
{

    int ii, num, count, nn;

    cout << "Enter max range: ";
    cin  >> nn;

    for (num = 1; num<= nn; num++)
    {
        count = 0;

        for (ii = 2; ii <= num/2; ii++)
        {
            if (num%ii == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0 && num != 1)
            cout << num << setw(3);
    }
    cout << endl;

    return 0;
}