#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r=a%b;
    if (r==0)
        return b;
    else
        return gcd(b,r); //recursive call
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b);
    cout<<"\nLCM of "<<a<<" and "<<b<<" is "<<(a*b)/gcd(a,b);
    return 0;
}

