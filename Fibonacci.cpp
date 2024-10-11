#include <iostream>
using namespace std;

int Fib(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3<<endl ;
        Fib(n-1);
    }
}

int main()
{
    int n;

    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Fibonacci series:"<<endl;
    cout<<0<<endl ;
    cout<<1<<endl ;
    Fib(n-2);

    return 0;
}
