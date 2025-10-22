#include <iostream>
using namespace std;

int main()
{
    int years;
    double salary, bonus = 0;

    cout << "Enter years of service: ";
    cin >> years;
    cout << "Enter current salary: ";
    cin >> salary;

    if (years >= 5)
    {
        if (salary > 50000)
            bonus = salary * 0.10;
        else
            bonus = salary * 0.05;

        cout << "Bonus: $" << bonus << endl;
    }
    else
    {
        cout << "Not eligible for bonus." << endl;
    }

    return 0;
}
