#include <iostream>
using namespace std;

void fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fact(n);
    return 0;
}