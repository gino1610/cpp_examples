#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    const string appVersion = "1.00.000";

    // defining variables and initializing them
    double num1, num2;
    char operation, redo;

    // print app name on screen
    cout << "Welcome to the calculator program v" << appVersion << " written by SGB" << endl;
    cout << "***********************************" << "********" << "***************" << endl;
    cout << endl << endl << endl;

    do 
    {
        // receiving the variables as input
        cout << " Please enter an operation which you like to calculate (+,-,*,/,s)";
        cout << "[s stands for swap]:";
        cin >> operation;
        cout << endl << endl;

        cout << " Please enter two numbers to apply your requested operation(";
        cout << operation <<"): "<< endl << "1st num: ";
        cin >> num1;
        cout << "2nd num: ";
        cin >> num2;
        cout << endl;

        switch(operation)
        {
            case '+':
                cout << "The addition of two numbers (" << num1 << "," << num2 << "): ";
                cout << num1+num2 << endl;
                break;
        
            case '-':
                cout << "The substraction of two numbers (" << num1 << "," << num2 << "): ";
                cout << num1-num2 << endl;
                break;

            case '*':
                cout << "The multiplication of two numbers (" << num1 << "," << num2 << "): ";
                cout << num1*num2 << endl;
                break;

            case '/':
                cout << "The division of two numbers (" << num1 << "," << num2 << "): ";
                if (num2 != 0)
                    cout << num1/num2 << endl;
                else 
                    cout << " not valid (num2 cannot be zero)" << endl;
                break;

            case 's':
                cout << "The swap of two numbers (" << num1 << "," << num2 << "): ";
                cout << num2 << ", " << num2 << endl;
                break;

            default:
                cout << "Unknown command" << endl;

        }




        cout << "Enter y or Y to continue:";
        cin >> redo;
        cout << endl << endl;

    } while (redo == 'y' || redo == 'Y');
}