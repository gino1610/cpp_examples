#include <iostream>
#include <stdint.h>

using namespace std;

uint64_t fact(unsigned int ii)
{
    uint64_t result = 1;
    while (ii > 0)
    {
        result *= ii;
        ii--;
    }
    return (result);
}

int main()
{
    unsigned int nn;
    cout << "Enter a natural number: ";
    cin >> nn;

    // while (nn < 0)
    // {
    //     cout << "Please re-enter: ";
    //     cin >> nn;
    // }

    cout << nn << "! = " << fact(nn) << endl;

    // std::cout << "unsigned long long " << sizeof(unsigned long long) << "\n";
    // std::cout << "unsigned long long int " << sizeof(unsigned long long int) << "\n";
 
    return 0;
}