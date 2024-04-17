#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int start, end;
    cout << "Enter the start of the interval: ";
    cin >> start;
    cout << "Enter the end of the interval: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}