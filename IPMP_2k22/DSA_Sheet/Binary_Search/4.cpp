#include<bits/stdc++.h>

using namespace std;

int findFloor(const vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    int floor = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return arr[mid]; 
        } else if (arr[mid] < x) {
            floor = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return floor;
}

int findCeiling(const vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    int ceiling = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return arr[mid]; 
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            ceiling = arr[mid];
            high = mid - 1;
        }
    }

    return ceiling;
}

int main() {
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int x = 5;

    int floorValue = findFloor(arr, x);
    int ceilingValue = findCeiling(arr, x);

    cout << "Floor of " << x << ": " << floorValue << endl;
    cout << "Ceiling of " << x << ": " << ceilingValue << endl;

    return 0;
}
