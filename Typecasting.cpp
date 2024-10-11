#include <iostream>
using namespace std;

int main()
{
    int a = 23;
    float b = 56.67;

    cout << "The value of a is:" << (float)a << endl;
    cout << "The value of a is:" << float(a) << endl;

    cout << "The value of b is:" << (int)b << endl;
    cout << "The value of b is:" << int(b) << endl;
    cout << "\n";

    int c = int(b);
    cout << "The value of c is:" << c << endl;
    cout << endl;

    cout << "The sum of a and b is:" << a + b << endl;
    cout << "The sum of a and b is:" << a + int(b) << endl;
    cout << "The sum of a and b is:" << a + (int)b << endl;

    return 0;
}
