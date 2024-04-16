#include <iostream>
using namespace std;
/*

int main()
{
    int n;
    cout << "Enter number of n: ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int cols = 1; cols <= row; cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

*/

/*
output:
*
**
***
****
*/

/*
int main()
{
    int n;
    cout << "Enter number of n: ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int cols = 1; cols <= n - row; cols++)
        {
            cout << " ";
        }
        for (int cols = 1; cols <= row; cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

*/

/*
output:
   *
  **
 ***
****
*/


int main(){
    int n;
    cout << "Enter number of n: ";
    cin >> n;
    for(int row = 1; row <= n; row++){
        for(int cols = 1; cols <= n-row; cols++){
            cout << cols;
        }
        cout << endl;
    }
}

/*
output:
123
12
1
*/