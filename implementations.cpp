//to implement STL in Cpp
#include<bits/stdc++.h>
using namespace std;


int main() {
    // a) vector (2d,3d vectors along with initializations)
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<vector<int>> v2d = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<vector<int>>> v3d(3, vector<vector<int>>(3, vector<int>(3, 0))); // 3D vector initialization

    // b) map
    map<string, int> myMap;
    myMap["one"] = 1;
    myMap["two"] = 2;

    // c) unordered_map
    unordered_map<string, int> myUnorderedMap;
    myUnorderedMap["apple"] = 3;
    myUnorderedMap["banana"] = 2;

    // d) set
    set<int> mySet = {5, 2, 8, 1, 3};

    // e) unordered_set
    unordered_set<int> myUnorderedSet = {10, 20, 30, 40};

    // f) stack
    stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // g) queue
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // h) algorithm (algorithms like sort, search, bounds, etc)
    sort(v1.begin(), v1.end());
    auto it = find(v1.begin(), v1.end(), 3);
    if (it != v1.end()) {
        cout << "Element found at position: " << distance(v1.begin(), it) << endl;
    }

    // i) priority_queue
    priority_queue<int> myPriorityQueue;
    myPriorityQueue.push(30);
    myPriorityQueue.push(10);
    myPriorityQueue.push(20);

    // j) deque
    deque<int> myDeque = {4, 3, 6, 8, 2};
    myDeque.push_front(1);
    myDeque.push_back(9);

    // Output
    cout << "Vector: ";
    for (int val : v1) {
        cout << val << " ";
    }
    cout << endl;

    cout << "2D Vector: ";
    for (const auto& row : v2d) {
        for (int val : row) {
            cout << val << " ";
        }
    }
    cout << endl;

    cout << "Map: " << myMap["one"] << ", " << myMap["two"] << endl;

    cout << "Unordered Map: " << myUnorderedMap["apple"] << ", " << myUnorderedMap["banana"] << endl;

    cout << "Set: ";
    for (int val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Unordered Set: ";
    for (int val : myUnorderedSet) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    cout << "Queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    cout << "Sorted Vector: ";
    for (int val : v1) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Element 3 found in Vector" << endl;

    cout << "Priority Queue: ";
    while (!myPriorityQueue.empty()) {
        cout << myPriorityQueue.top() << " ";
        myPriorityQueue.pop();
    }
    cout << endl;

    cout << "Deque: ";
    for (int val : myDeque) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}