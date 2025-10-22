#include <iostream>
using namespace std;

int main()
{
    double pH;
    cout << "Enter pH value of water: ";
    cin >> pH;

    if (pH < 6)
        cout << "Acidic Water" << endl;
    else if (pH <= 8)
        cout << "Neutral Water" << endl;
    else
        cout << "Alkaline Water" << endl;

    return 0;
}
