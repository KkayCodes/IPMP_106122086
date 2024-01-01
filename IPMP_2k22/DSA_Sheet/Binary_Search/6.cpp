#include <iostream>
#include <vector>

using namespace std;

int findFixedPoint(const vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == mid) {
            return mid;
        } else if (arr[mid] < mid) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr1 = {-10, -5, 0, 3, 7};
    vector<int> arr2 = {0, 2, 5, 8, 17};

    cout << "Fixed Point in arr1: " << findFixedPoint(arr1) << endl;
    cout << "Fixed Point in arr2: " << findFixedPoint(arr2) << endl;

    return 0;
}
