#include <iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;           // Default argument(factor) should not be the first argument.
}      

int main()
{
    int money;

    cout << "Enter the amount of money:";
    cin >> money;

    cout << "If you have Rs." << money << " in your bank account, you will receive Rs." << moneyReceived(money) << " after 1 year" << endl;

    cout << "For VIP:-If you have Rs." << money << " in your bank account, you will receive Rs." << moneyReceived(money, 1.1) << " after 1 year" << endl;

    return 0;
}
// 'Constant Argument':- int strlen(const char *p) [example] {No modification of argument happens}