#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int key) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Key found
        } else if (arr[mid] < key) {
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

    cout << "Enter the elements of the sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;

    cout << "Enter the key to search: ";
    cin >> key;

    int index = binarySearch(arr, key);

    if (index != -1) {
        cout << "Key found at index " << index << "." << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}
