#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++) // For loop
    {
        cout << i << endl;
    }
    cout << "\n";


    int j = 1;
    while (j <= 8) // While loop
    {
        cout << j << endl;
        j++;
    }
    cout << "\n";


    char k = 'a';
    do // do-while loop
    {
        cout << k << endl;
        k++;
    } while (k < 'g');

    return 0;
}
