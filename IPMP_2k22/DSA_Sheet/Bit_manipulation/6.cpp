#include <iostream>

int absWithoutBranching(int x) {
    int mask = x >> (sizeof(int) * 8 - 1);
    return (x + mask) ^ mask;
}

int main() {
    int num = -25; // Change this to your desired integer

    int absValue = absWithoutBranching(num);

    std::cout << "Absolute value of " << num << ": " << absValue << std::endl;

    return 0;
}
