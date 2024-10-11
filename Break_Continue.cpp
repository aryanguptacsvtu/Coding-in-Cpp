#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;                // Using 'Break' in C++.
        }
        cout << i << endl;
    }
    cout << "\n";


    for (int j = 0; j < 10; j++)
    {
        if (j == 4)
        {
            continue;             // Using 'Continue' in C++.
        }
        cout << j << endl;
    }

    return 0;
}