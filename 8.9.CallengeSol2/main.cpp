#include <iostream>
using namespace std;

int main()
{
    int change_amount{};
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    //Solution 2 - using the modulator operator
    cout << "Enter an amount in cents:";
    cin >> change_amount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = change_amount/dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance/quarter_value;
    balance %= quarter_value;

    dimes = balance/dime_value;
    balance %= dime_value;

    nickels = balance/nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "You have: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}