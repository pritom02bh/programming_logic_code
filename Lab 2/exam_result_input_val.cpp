// using if statement for input validation

#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score (0–100): ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid! Please enter again: ";
        cin >> score;
    }

    if (score >= 0 && score <= 100)
        cout << "Valid score: " << score << endl;
    else
        cout << "Still invalid!" << endl;

    return 0;
}
