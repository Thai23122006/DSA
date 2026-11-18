
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& a, int target) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> a = {5, 2, 8, 1, 9};

    int target = 8;

    int result = linearSearch(a, target);

    cout << result;
}
