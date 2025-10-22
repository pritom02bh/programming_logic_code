#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char lower = 'k';
    char upper = 'M';

    cout << "Original lowercase: " << lower << " → Uppercase: " << (char)toupper(lower) << endl;
    cout << "Original uppercase: " << upper << " → Lowercase: " << (char)tolower(upper) << endl;

    // Convert entire string to uppercase
    string name = "programming";
    for (char &c : name)
    {
        c = toupper(c);
    }
    cout << "Converted string to uppercase: " << name << endl;

    return 0;
}
