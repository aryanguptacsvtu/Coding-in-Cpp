#include <iostream>
using namespace std;

typedef struct employee
{
    int id;
    char FavChar;
    int salary;

} ep;            // Using "typedef" to rename structure as 'ep'.

int main()
{
    ep harry;
    harry.id = 23;

    ep rohan;
    rohan.salary = 44000;

    cout << "Enter the Fav. char of Harry: ";
    cin >> harry.FavChar;

    cout << "The id of Harry is:" << harry.id << endl;
    cout << "The salary of Rohan is:" << rohan.salary << endl;
    cout << "The Fav. char of Harry is:" << harry.FavChar << endl;

    return 0;
}
