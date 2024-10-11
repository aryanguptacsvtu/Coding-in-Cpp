#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using function with 2 arguments." << endl;
    return (a + b);
}

int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguments." << endl;
    return (a + b + c);
}

int main()
{
    int a, b, c;

    cout << "Enter the value of a:";
    cin >> a;
    cout << endl;

    cout << "Enter the value of b:";
    cin >> b;
    cout << endl;

    cout << "Enter the value of c:";
    cin >> c;

    cout << "The sum of " << a << " and " << b << " is:" << sum(a, b) << endl<<endl;

    cout << "The sum of " << a << "," << b << " and" << c << " is:" << sum(a, b, c) << endl;

    return 0;
}
