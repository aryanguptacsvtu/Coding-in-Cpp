#include <iostream>
using namespace std;

class time
{
private:
    int a;
    int b;
    int c;

public:
    void setData(int v1, int v2, int v3)
    {
        a = v1;
        b = v2;
        c = v3;
    }
    void Sum(time o1, time o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        c = o1.c + o2.c;
    }
    void printNumber()
    {
        cout << "Your time is:" << a << "hr," << b << "min," << c << "sec" << endl;
    }
};

int main()
{
    int h1, m1, s1;
    int h2, m2, s2;

    cout << "Enter the First time:-" << endl;
    cout << "In hours:";
    cin >> h1;
    cout << "In minutes:";
    cin >> m1;
    cout << "In seconds:";
    cin >> s1;
    cout << "\n";

    cout << "Enter the Second time:-" << endl;
    cout << "In hours:";
    cin >> h2;
    cout << "In minutes:";
    cin >> m2;
    cout << "In seconds:";
    cin >> s2;
    cout << endl;
    time o1, o2, o3;

    o1.setData(h1, m1, s1);
    o1.printNumber();
    o2.setData(h2, m2, s2);
    o2.printNumber();

    cout << endl;
    cout << "Performing Sum:" << endl;
    o3.Sum(o1, o2);
    o3.printNumber();
    return 0;
}