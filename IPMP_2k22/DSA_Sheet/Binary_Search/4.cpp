#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findSubarrayIndices(const vector<int>& arr) {
    int n = arr.size();
    int left = 0;

    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    if (left == n - 1) {
        cout << "The array is already sorted." << endl;
        return;
    }

    int right = n - 1;
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    int min_val = *min_element(arr.begin() + left, arr.begin() + right + 1);
    int max_val = *max_element(arr.begin() + left, arr.begin() + right + 1);

    while (left >= 0 && arr[left] > min_val) {
        left--;
    }

    while (right < n && arr[right] < max_val) {
        right++;
    }

    cout << "The subarray lies between indexes " << left + 1 << " and " << right - 1 << endl;
}

int main() {
    vector<int> arr1 = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    vector<int> arr2 = {0, 1, 15, 25, 6, 7, 30, 40, 50};

    cout << "For array 1:" << endl;
    findSubarrayIndices(arr1);

    cout << "\nFor array 2:" << endl;
    findSubarrayIndices(arr2);

    return 0;
}
