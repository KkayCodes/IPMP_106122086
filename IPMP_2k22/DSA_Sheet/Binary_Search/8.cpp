#include <bits/stdc++.h>
using namespace std;

int findMaximum(vector<int> &arr) {
    int n = arr.size();
    int maxElement = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = findMaximum(arr);

    cout << "Maximum element in the array: " << maxElement << endl;

    return 0;
}
