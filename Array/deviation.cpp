#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 5, 2, 7, 8};
    int d = 1;
    int deviation = 0;
    for (int i = 0; i < 5; i++)
    {
        deviation += (arr[i] - d);
    }
    cout << "The deviation of the array elements: " << deviation << endl;
    return 0;
}
