#include <iostream>

using namespace std;

int countOnes(int n) {
    int count = 0;

    while (n != 0) {
        count += n & 1;
        n >>= 1;
    }

    return count;
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int numberOfOnes = countOnes(num);

    cout << "Number of 1s in the binary representation of " << num << ": " << numberOfOnes << endl;

    return 0;
}
