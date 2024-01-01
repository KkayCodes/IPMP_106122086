#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
    if (A.size() > B.size()) {
        swap(A, B);
    }

    int x = A.size();
    int y = B.size();
    int low = 0;
    int high = x;

    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;

        int maxX = (partitionX == 0) ? INT_MIN : A[partitionX - 1];
        int minX = (partitionX == x) ? INT_MAX : A[partitionX];

        int maxY = (partitionY == 0) ? INT_MIN : B[partitionY - 1];
        int minY = (partitionY == y) ? INT_MAX : B[partitionY];

        if (maxX <= minY && maxY <= minX) {
            if ((x + y) % 2 == 0) {
                return (double)(max(maxX, maxY) + min(minX, minY)) / 2;
            } else {
                return (double)max(maxX, maxY);
            }
        } else if (maxX > minY) {
            high = partitionX - 1;
        } else {
            low = partitionX + 1;
        }
    }

    return -1;
}

int main() {
    int m, n;

    cout << "Enter the size of array A: ";
    cin >> m;
    vector<int> A(m);

    cout << "Enter the elements of array A:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    cout << "Enter the size of array B: ";
    cin >> n;
    vector<int> B(n);

    cout << "Enter the elements of array B:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    double median = findMedianSortedArrays(A, B);

    if (median == 1) {
        cout << "Invalid input arrays." << endl;
    } else {
        cout << "Median of the merged array: " << median << endl;
    }

    return 0;
}
