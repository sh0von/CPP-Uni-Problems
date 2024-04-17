#include <iostream>

using namespace std;

double power(double base, int exponent)
{
    double result = 1.0;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    double base;
    int exponent;

    cout << "Enter base: ";

    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << "Result: " << power(base, exponent) << endl;

    return 0;
}
