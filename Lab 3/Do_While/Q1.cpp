// Ask user to enter password until correct one is entered

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    do
    {
        cout << "Enter password: ";
        cin >> password;
    } while (password != "admin123");
    cout << "Access Granted!";
    return 0;
}
