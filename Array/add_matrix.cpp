#include <iostream>
using namespace std;

int main()
{
    int matrix1[2][2];
    int matrix2[2][2];
    int sum[2][2];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix2[i][j];
        }
    }

    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
