#include <bits/stdc++.h>
using namespace std;

int findTransitionPoint(vector<int>& arr) {
    int low = 0;
    int high = 1;

    while (arr[high] == 0) {
        low = high;
        high *= 2;
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)) {
            return mid;
        } else if (arr[mid] == 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the sorted array (0s and 1s only):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int transitionPoint = findTransitionPoint(arr);

    if (transitionPoint != -1) {
        cout << "Transition point (index where 1s start): " << transitionPoint << endl;
    } else {
        cout << "No transition point found (only 0s or 1s in the array)." << endl;
    }

    return 0;
}
