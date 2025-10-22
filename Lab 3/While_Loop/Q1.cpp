// Print numbers from 1 to n using a while loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}