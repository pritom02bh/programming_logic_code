#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    int attempts = 0;

    while (attempts < 3)
    {
        cout << "Enter password: ";
        cin >> password;

        if (password == "pass123")
        {
            cout << "Access Granted" << endl;
            return 0;
        }
        else
        {
            cout << "Incorrect password." << endl;
            attempts++;
        }
    }

    cout << "Account Locked" << endl;
    return 0;
}
