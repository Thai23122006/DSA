
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& a) {
    int n = a.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        swap(a[i], a[minIndex]);
    }
}

int main() {
    vector<int> a = {5, 2, 8, 1, 9};

    selectionSort(a);

    for (int x : a) cout << x << " ";
}
