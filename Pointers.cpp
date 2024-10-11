#include <iostream>
using namespace std;
int main()
{
    int a = 8;
    int *b = &a;

    cout << "The address of a is:" << &a << endl;
    cout << "The address of a is:" << b << endl;
    cout << "The value at address b is:" << *b << endl;
    cout << "\n";

    int **c = &b;      // Pointer to Pointer

    cout << "The address of b is:" << &b << endl;
    cout << "The address of b is:" << c << endl;

    cout << "The value at address c is:" << *c << endl;
    cout << "The value at (value_at c) is:" << **c << endl;

    return 0;
}