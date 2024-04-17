#include <iostream>
using namespace std;

int main()
{
    int n, reversed_number = 0;

    cout << "Enter an integer: ";
    cin >> n;

    for (; n != 0; n /= 10)
    {
        int remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
    }

    cout << "Reversed Number = " << reversed_number;

    return 0;
}
