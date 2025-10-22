// Calculate the sum of all even numbers from 1 to n using a while loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = 0;
    int i = 2; // Start from the first even number

    while (i <= n)
    {
        sum += i; // Add the even number to sum
        i += 2;   // Move to the next even number
    }

    cout << "The sum of all even numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}