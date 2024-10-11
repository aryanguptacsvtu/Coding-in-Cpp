#include <iostream>
using namespace std;

int global = 8; // Global variable.

void sum()
{
    cout << "The value of global variable inside the function:" << global;
}
int main()
{
    int a = 132, b = 34;
    float pi = 3.14;
    char c = 'A';
    bool var = true;

    int global = 384;

    cout << "The value of a is:" << a << "\n";
    cout << "The value of b is:" << b << "\n";
    cout << "The value of Pi is:" << pi;
    cout << "\nThe value of c is:" << c << "\n";
    cout << "Boolean variable:" << var;
    cout << endl;
    cout << "\nThe value of global is:" << global << "\n";
    // Local variable has higher 'precedence' than Global variables.
    sum();
    return 0;
}
