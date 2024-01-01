#include <iostream>
#include <vector>

using namespace std;

int firstOccurrence(const vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    int firstOccur = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            firstOccur = mid;
            high = mid - 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return firstOccur;
}

int lastOccurrence(const vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    int lastOccur = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            lastOccur = mid;
            low = mid + 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return lastOccur;
}

int countOccurrences(const vector<int>& arr, int x) {
    int firstOccur = firstOccurrence(arr, x);

    if (firstOccur == -1) {
        return 0;
    }

    int lastOccur = lastOccurrence(arr, x);

    return lastOccur - firstOccur + 1;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 4, 4, 5};

    int x = 2;
    int occurrences = countOccurrences(arr, x);

    cout << "Number of occurrences of " << x << " in the array: " << occurrences << endl;

    return 0;
}
