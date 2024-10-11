#include <iostream>
using namespace std;

struct employee
{
    int id;           // 4 bytes
    char favChar;     // 1 byte
    int salary;       // 4 bytes
} harry;

int main()
{              
    harry.id = 1;          // size of(structure)= 9 bytes

    struct employee shubham;
    shubham.salary = 25000;

    cout << "The id of Harry is:" << harry.id << endl;
    cout << "The salary of Shubham is:" << shubham.salary << endl;

    cout << "Enter the character:";
    cin >> harry.favChar;
    cout << "The Favchar of harry is:" << harry.favChar << endl;

    return 0;
}
