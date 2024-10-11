#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}                // Call by Value has 'No effect' on Actual arguments.

int main()
{
    int a = 10, b = 50;

    cout << "Value of a:" << a << " and value of b:" << b << " before swapping." << endl;
    swap(a, b);
    cout << "Value of a:" << a << " and value of b:" << b << " after swapping." << endl;
    return 0;
}
