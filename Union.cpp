#include <iostream>
using namespace std;
union money
{
    int rice;            // 4 bytes
    char car;            // 1 byte
    float pounds;        // 4 bytes
};

int main()
{
    union money m1;      // sizeof(union)=4 bytes
    m1.rice = 34;
    m1.car = 'm';

    cout << m1.car << endl;
    // cout<<m1.rice; would produce a garbage value.

    return 0;
}
