// Validate input (0-1p00) using a do-while loop

#include <iostream>
using namespace std;

int main()
{
    int marks;
    do
    {
        cout << "Enter marks (0–100): ";
        cin >> marks;
    } while (marks < 0 || marks > 100);
    cout << "Valid marks: " << marks;
    return 0;
}
