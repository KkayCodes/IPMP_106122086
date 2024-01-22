#include <bits/stdc++.h>
using namespace std;

int rightmostSetBitPosition(int n) { return n == 0 ? -1 : __builtin_ffs(n); }

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    cout << "Position of the rightmost set bit: " << rightmostSetBitPosition(num) << endl;
    return 0;
}
