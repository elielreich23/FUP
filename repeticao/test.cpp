#include <iostream>

using namespace std;
// function definition
void passReference(int &number)
{
    // Multiply the number by 10
    number = number * 10;
    cout << "Value of number inside the function = " << number << endl;
}

int main()
{
    // Initialize variable
    int number;

    cout << "Enter value of  number: " << endl;
    cin >> number;
    // Call function
    passReference(number);
    cout << "Value of number after function call = " << number << endl;

    return 0;
}