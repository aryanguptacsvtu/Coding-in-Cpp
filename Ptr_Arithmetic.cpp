#include <iostream>
using namespace std;
int main()
{
    int array[5];

    cout << "Enter the elements of array:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    int *p = array;
    int a = 1111;
    int *ptr = &a;

    cout << "The value of *(p+3) is:" << *(p + 3) << endl;

    cout << *(p++) << endl;
    cout << *(++p) << endl;          // Pre & Post Incrementation & Decrementation of pointers.
    cout << *(p--) << endl;
    cout << *(--p) << endl;
    cout << "\n";

    cout << "Value on Comparison:" << (*ptr > array[1]) << endl;      // Comparison of Pointers.

    return 0;
}