#include <iostream>
using namespace std;

int main()
{
    int score;

    do
    {
        cout << "Enter your score (0–100): ";
        cin >> score;

        if (score < 0 || score > 100)
            cout << "Out of range! Try again.\n";

    } while (score < 0 || score > 100);

    cout << "Your valid score: " << score << endl;
    return 0;
}
