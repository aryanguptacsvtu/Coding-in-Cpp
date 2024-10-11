#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me the age:";
    cin >> age;

    if ((age < 18) && (age > 0))
    {
        cout << "You cannot come to the party." << endl;
    }
    else if (age == 18)
    {
        cout << "You will get a kid pass to the party." << endl;
    }
    else if (age < 1)
    {
        cout << "You are not yet born." << endl;
    }
    else
    {
        cout << "You can come to the party." << endl;
    }

    return 0;
}
