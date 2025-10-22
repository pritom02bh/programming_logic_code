#include <iostream>
using namespace std;

int main()
{
    int age = 22;
    bool hasLicense = true;
    bool hasInsurance = false;

    cout << "Checking driving eligibility..." << endl;

    if (age >= 18 && hasLicense)
    {
        cout << "You are legally allowed to drive." << endl;
    }
    else
    {
        cout << "You cannot drive legally." << endl;
    }

    // Demonstrating OR
    if (hasLicense || hasInsurance)
    {
        cout << "You can apply for car rental." << endl;
    }
    else
    {
        cout << "You need at least a license or insurance." << endl;
    }

    // Demonstrating NOT
    if (!hasInsurance)
    {
        cout << "Please get car insurance!" << endl;
    }

    return 0;
}
