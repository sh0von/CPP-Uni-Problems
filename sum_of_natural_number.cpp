#include <iostream>
using namespace std;

void by_formula(int n)
{
    cout << "Sum of first " << n << " natural numbers by formula: " << n * (n + 1) / 2 << endl;
}
void by_loop(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout << "Sum of first " << n << " natural numbers by loop: " << sum << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    by_formula(n);
    by_loop(n);
    return 0;
}