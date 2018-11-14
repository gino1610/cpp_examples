#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (num%2 == 0)
        cout << num << " is an Even number";
    else
        cout << num << " is an odd number";

    return 0;
}