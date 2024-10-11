#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the age:";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18." << endl;
        break;

    case (22):
        cout << "You are 22." << endl;
        break;

    case 5:
        cout << "You are 5." << endl;
        break;
        
    case (0):
        cout << "You are not yet born." << endl;
        break;

    default:
        cout<<"No special cases."<<endl;
        break;
    }
    cout<<"Done with the switch-case statement.";
    
    return 0;
}
