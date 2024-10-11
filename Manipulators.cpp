#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 2, b = 46, c = 5896;

    cout << "The value of a without setw is:" << a << endl;
    cout << "The value of b without setw is:" << b << endl;
    cout << "The value of c without setw is:" << c << endl;

    cout << "The value of a is:" << setw(4) << a << endl; // Using Manipulators(endl & setw).
    cout << "The value of b is:" << setw(4) << b << endl;
    cout << "The value of c is:" << setw(4) << c << endl;

    return 0;
}
