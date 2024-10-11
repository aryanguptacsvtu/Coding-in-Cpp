#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 4;

    cout << "OPERATORS IN C++:" << endl
         << endl;

    cout << "The 'ARITHMETIC OPERATORS' are as follows:" << endl;
    cout << "The value of a+b is:" << a + b << endl;
    cout << "The value of a-b is:" << a - b << endl; // Arithmetic operators in C++.
    cout << "The value of a*b is:" << a * b << endl;
    cout << "The value of a/b is:" << a / b << endl;
    cout << "The value of a%b is:" << a % b << endl;

    cout << "The value of a++ is:" << a++ << endl;
    cout << "The value of a-- is:" << a-- << endl; // Pre & Post Incrementation and Decrementation.
    cout << "The value of ++a is:" << ++a << endl;
    cout << "The value of --a is:" << --a << endl
         << endl;

    cout << "The 'COMPARISON OPERATORS' are as follows:" << endl;
    cout << "The value of a==b is:" << (a == b) << endl;
    cout << "The value of a!=b is:" << (a != b) << endl; // Comparison operators in C++.
    cout << "The value of a>b is:" << (a > b) << endl;
    cout << "The value of a>=b is:" << (a >= b) << endl;
    cout << "The value of a<b is:" << (a < b) << endl;
    cout << "The value of a<=b is:" << (a <= b) << "\n\n";

    cout << "The 'LOGICAL OPERATORS' are as follows:" << endl; // Logical operators in C++.
    cout << "Using logical 'AND' in ((a==b)&&(a<b)):" << ((a == b) && (a < b)) << endl;
    cout << "Using logical 'OR' in ((a==b)||(a<b)):" << ((a != b) || (a < b)) << endl;
    cout << "Using logical 'NOT' in (!(a==b)):" << (!(a == b)) << endl;

    return 0;
}
