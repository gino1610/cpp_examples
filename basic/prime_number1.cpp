#include <iostream>

using namespace std;

int main()
{
    long ii, num;

    cout << "Enter any number: ";
    cin >> num;

    if (num <=1)
        cout << "Smaller prime number is 2";
    
    for (ii = 2; ii<num;ii++)
    {
        if (num%ii == 0)
        {
            cout << num << " is not a prime number" << endl;
            break;
        }
    }

    if (num == ii)
        cout << num << " is a prime number" << endl;

    return 0;
}