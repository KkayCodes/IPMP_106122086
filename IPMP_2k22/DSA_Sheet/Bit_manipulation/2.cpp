#include <bits/stdc++.h>
using namespace std;

unsigned int reverseBits(unsigned int n) {
    unsigned int numOfBits = sizeof(n) * 8;

    for (unsigned int i = 0; i < numOfBits / 2; ++i) {
        if (((n >> i) & 1) != ((n >> (numOfBits - 1 - i)) & 1)) {
            n ^= (1 << i) | (1 << (numOfBits - 1 - i));
        }
    }

    return n;
}

int main() {
    unsigned int num = 25;
    unsigned int reversedNum = reverseBits(num);

    cout << "Original number: " << num << endl;
    cout << "Number with reversed bits: " << reversedNum << endl;

    return 0;
}
