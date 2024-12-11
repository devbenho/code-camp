#include <iostream>
#include "mathlib.h" 
using namespace std;

int main()
{
    // General Formula is FunctionName<DataType>(arg1, arg2)
    int num1, num2;
    cout << "Enter 1st Number: ";
    cin >> num1; 
    cout << "Enter 2nd Number: ";
    cin >> num2; 
    cout << "Sum: " << sum<int>(num1, num2) << endl;
    cout << "Subtraction: " << sub<int>(num1, num2) << endl;
    cout << "Multiplication: " << multiply<int>(num1, num2) << endl;
    cout << "Division: " << div<int>(num1, num2) << endl;

    return 0;
}