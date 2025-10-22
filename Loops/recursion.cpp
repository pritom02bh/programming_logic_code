#include <iostream>
using namespace std;

// Recursive function to print numbers from 1 to n
void printNumbers(int n)
{
    if (n == 0) // Base case: stop when n reaches 0
        return;

    printNumbers(n - 1); // Recursive call (function calls itself)
    cout << n << " ";    // Action after the recursive call
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Numbers from 1 to " << num << ": ";
    printNumbers(num); // Calling the recursive function
    cout << endl;

    return 0;
}
