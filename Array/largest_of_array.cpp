#include <iostream>
#include <algorithm>
using namespace std;

void byLoop(){
    int arr[5] = {3, 5, 2, 7, 8};
    int largest = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "The largest element in the array (found by loop) is: " << largest << endl;
}

void byAlgorithm(){
    int arr[5] = {3, 5, 2, 7, 8};
    int largest = *max_element(arr, arr+5);
    cout << "The largest element in the array (found by algorithm) is: " << largest << endl;
}

int main(){
    byLoop();
    byAlgorithm();
    return 0;
}
