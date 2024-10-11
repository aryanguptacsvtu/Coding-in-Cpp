#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;      // Reference variables(a,b)
}                  // Call by Reference variable has 'effect' on Actual arguments.

int main()
{
    int x = 10, y = 50;

    cout << "Value of x:" << x << " and value of y:" << y << " before swapping." << endl;
    swap(x,y);
    cout << "Value of x:" << x << " and value of y:" << y << " after swapping." << endl;
    return 0;
}
