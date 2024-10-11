#include <iostream>
using namespace std;

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    cout << endl;

    Meal m1 = lunch;
    cout << m1 << endl;
    cout << "On comparison:" << (m1 == 2);

    return 0;
}
