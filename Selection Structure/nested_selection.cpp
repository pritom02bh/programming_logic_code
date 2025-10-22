#include <iostream>
using namespace std;

int main()
{
    int age = 15;
    char citizen = 'Y';

    if (age >= 18)
    {
        if (citizen == 'Y')
            cout << "You can vote in this country." << endl;
        else
            cout << "You must be a citizen to vote." << endl;
    }
    else
    {
        cout << "You are underage." << endl;
    }
    return 0;
}
