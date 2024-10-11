#include <iostream>
using namespace std;

void isprime(int n)
{
    if (n <= 1)
    {
        cout << "This is not prime\n";
        return;
    }

    bool prime = true;
    int k = n / 2;

    for (int i = 2; i <= k; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
    {
        cout << "This is prime\n";
    }
    else
    {
        cout << "This is not prime\n";
    }
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    isprime(n);
    return 0;
}
