#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int nn, ii = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> nn;

    while (ii < nn)
    {
        if (nn%ii == 0)
            sum += ii;
        ii++;
    }

    if (sum == nn)
        cout << nn << " is a perfect number" << endl;
    else
        cout << nn << " is not a perfect number" << endl;

    // system("pause");

    return 0;
}
