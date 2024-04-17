#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    
    cout << "Average of the array elements: " << sum / n << endl;
    
    return 0;
}
