#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks (0–100): ";
    cin >> marks;

    // Validation loop
    while (marks < 0 || marks > 100)
    {
        cout << "Invalid input! Marks must be between 0 and 100: ";
        cin >> marks;
    }

    // Decision part
    if (marks >= 60)
        cout << "You passed!" << endl;
    else
        cout << "You failed, better luck next time." << endl;

    return 0;
}
