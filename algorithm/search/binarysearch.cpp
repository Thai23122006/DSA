
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& a, int target) {
    int left = 0;
    int right = (int)a.size() - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (a[mid] == target) {
            return mid;
        }
        else if (a[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> a = {2, 5, 8, 12, 16, 23, 38, 45, 56};

    int target;
    cout << "Enter target: ";
    cin >> target;

    int result = binarySearch(a, target);

    if (result != -1) {
        cout << "Found at index: " << result << endl;
    }
    else {
        cout << "Not found!" << endl;
    }

    return 0;
}
