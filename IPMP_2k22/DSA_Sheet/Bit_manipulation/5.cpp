#include <bits/stdc++.h>

using namespace std;

unsigned int leftRotate(unsigned int num, unsigned int rotateBy) {
    return (num << rotateBy) | (num >> (32 - rotateBy));
}

unsigned int rightRotate(unsigned int num, unsigned int rotateBy) {
    return (num >> rotateBy) | (num << (32 - rotateBy));
}

int main() {
    unsigned int num;
    unsigned int rotateBy;
    cout<<"Enter the number and no. of bits to be rotated by: ";
    cin>>num>>rotateBy;

    unsigned int leftRotated = leftRotate(num, rotateBy);
    cout << "Left rotated by " << rotateBy << " positions: " << leftRotated << endl;

    unsigned int rightRotated = rightRotate(num, rotateBy);
    cout << "Right rotated by " << rotateBy << " positions: " << rightRotated << endl;

    return 0;
}
