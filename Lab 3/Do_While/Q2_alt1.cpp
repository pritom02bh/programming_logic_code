// Using input validation with cin.fail()

#include <iostream>
using namespace std;

int main()
{
    int marks;
    while (true)
    {
        cout << "Enter marks (0–100): ";
        cin >> marks;

        if (cin.fail() || marks < 0 || marks > 100)
        {
            cin.clear();            // clear error flag
            cin.ignore(1000, '\n'); // discard invalid input
            cout << "Invalid input! Try again.\n";
        }
        else
        {
            break; // valid input
        }
    }

    cout << "Valid marks: " << marks << endl;
    return 0;
}
