#include <iostream>
using namespace std;

int main()
{
    float a = 23.45;
    long double X = 23.45;

    cout << "The size of 23.45 is:" << sizeof(23.45) << endl;    // Double value.
    cout << "The size of 23.45f is:" << sizeof(23.45f) << endl;
    cout << "The size of 23.45F is:" << sizeof(23.45F) << endl;
    cout << "The size of 23.45l is:" << sizeof(23.45l) << endl;
    cout << "The size of 23.45L is:" << sizeof(23.45L) << endl;

    cout << "The size of a is:" << sizeof(a) << endl;
    cout << "The size of X is:" << sizeof(X) << endl;

    return 0;
}
