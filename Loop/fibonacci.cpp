#include <iostream>

using namespace std;

void fibonacci(int num) {
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < num; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    fibonacci(num);

    return 0;
}
