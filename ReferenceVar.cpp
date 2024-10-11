#include<iostream>
using namespace std;

int main()
{
    int x = 4223;
    int &y = x;         // Reference variable(y).

    cout<<"Value of x:"<<x<<endl;
    cout<<"Value of y:"<<y<<endl;

    return 0;
}
