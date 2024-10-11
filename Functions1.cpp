#include <iostream>
using namespace std;

int fun(int, int);                   // Function Prototype
int main()
{
    int n1, n2;

    cout << "Enter first number:"; 
    cin >> n1;                        // Actual arguments(n1,n2)
    cout << "Enter second number:";
    cin >> n2;
        
    cout << "\nThe sum is:" << fun(n1, n2);
    return 0;
}
int fun(int a, int b)
{
    int c;                           // Formal arguments(a,b)
    c = a + b;
    return c;
}
