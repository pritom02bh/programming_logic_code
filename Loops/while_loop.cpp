#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    while (number <= 5)
    {
        cout << "Number: " << number << endl;
        number++; // increment to avoid infinite loop
    }
    return 0;
}