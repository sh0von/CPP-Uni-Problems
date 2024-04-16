#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter coefficients of the quadratic equation in higher to lower order: ";
    cin >> a >> b >> c;
    int d = b*b - 4*a*c;
    if (d > 0){
        cout << "Roots are real and different" << endl;
        cout << "Root 1 = " << (-b + sqrt(d))/(2*a) << endl;
        cout << "Root 2 = " << (-b - sqrt(d))/(2*a) << endl;
    }
    else if (d==0){
        cout << "Roots are real and same" << endl;
        cout << "Root 1 = Root 2 = " << -b/(2*a) << endl;
    }
    else{
        cout << "Roots are complex and different" << endl;
        cout << "Root 1 = " << -b/(2*a) << " + " << sqrt(-d)/(2*a) << "i" << endl;
        cout << "Root 2 = " << -b/(2*a) << " - " << sqrt(-d)/(2*a) << "i" << endl;
    }
}