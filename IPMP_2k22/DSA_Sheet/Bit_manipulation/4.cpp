#include <bits/stdc++.h>

using namespace std;

int countBitsToFlip(int A, int B) {
    int XOR_result = A ^ B;
    int count = 0;

    while (XOR_result != 0) {
        count += XOR_result & 1;
        XOR_result >>= 1;
    }

    return count;
}

int main() {
    int numA;
    int numB;
    cout<<"Enter two numbers: ";
    cin>>numA>>numB;

    int bitsToFlip = countBitsToFlip(numA, numB);

    cout << "Number of bits needed to flip from " << numA << " to " << numB << ": " << bitsToFlip << endl;

    return 0;
}
