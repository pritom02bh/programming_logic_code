// Display multiplication table of a number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":\n";
    for (int i = 1; i <= 10; ++i)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}