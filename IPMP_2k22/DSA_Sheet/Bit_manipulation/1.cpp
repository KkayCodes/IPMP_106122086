#include <iostream>

using namespace std;

bool isPOT(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (isPOT(number)) {
        cout << number << " is a power of 2." << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }

    return 0;
}
