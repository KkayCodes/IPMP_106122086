#include <bits/stdc++.h>
using namespace std;

int rightmostSetBitPosition(int n) {
    if (n == 0) {
        return -1;
    }

    int position = 1;
    while ((n & 1) == 0) {
        n >>= 1;
        ++position;
    }

    return position;
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout << "Position of the rightmost set bit: " << rightmostSetBitPosition(num) << endl;
    return 0;
}
