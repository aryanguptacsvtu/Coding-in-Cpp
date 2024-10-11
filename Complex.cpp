#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void Sum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber()
    {
        cout << "Your complex no. is:" << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.setData(12, 34);
    c1.printNumber();

    c2.setData(3, 8);
    c2.printNumber();

    cout << "Performing Sum:-" << endl;
    c3.Sum(c1, c2);
    c3.printNumber();
    return 0;
}