#include <iostream>
using namespace std;

int main()
{
    double temperature;
    cout << "Enter temperature in °C: ";
    cin >> temperature;

    if (temperature > 35)
        cout << "Heat Alert! Stay Hydrated." << endl;

    return 0;
}
