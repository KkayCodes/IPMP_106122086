#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] < nums[high]) {
            high = mid;
        } else if (nums[mid] > nums[high]) {
            low = mid + 1;
        } else {
            high--;
        }
    }

    return nums[low];
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the rotated sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minElement = findMin(arr);

    cout << "Minimum element in the rotated sorted array: " << minElement << endl;

    return 0;
}
