#include <iostream>
#include <vector>

using namespace std;

int findFirstOccurrence(const vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            result = mid;
            high = mid - 1; 
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int findLastOccurrence(const vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            result = mid;
            low = mid + 1; 
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

bool isMajority(const vector<int>& arr, int x) {
    int firstOccurrence = findFirstOccurrence(arr, x);
    int lastOccurrence = findLastOccurrence(arr, x);

    if (firstOccurrence != -1 && lastOccurrence != -1) {
        int count = lastOccurrence - firstOccurrence + 1;
        int n = arr.size();
        return count > n / 2;
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 3, 3, 4, 5};
    int x = 3;

    if (isMajority(arr, x)) {
        cout << x << " is a majority element." << endl;
    } else {
        cout << x << " is not a majority element." << endl;
    }

    return 0;
}
