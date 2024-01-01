#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp;

    for (int i = 0; i < n; i++) {
        auto it = lower_bound(dp.begin(), dp.end(), nums[i]);
        if (it == dp.end()) {
            dp.push_back(nums[i]);
        } else {
            *it = nums[i];
        }
    }

    return dp.size();
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

    int lisLength = lengthOfLIS(arr);

    cout << "Length of the Longest Increasing Subsequence: " << lisLength << endl;

    return 0;
}
