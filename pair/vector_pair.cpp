
#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

int main() {
    vector<pair<string, int>> products = {
        {"Apple", 50},
        {"Banana", 30},
        {"Orange", 40}
    };

    // Duyet vector
    for (int i = 0; i < products.size(); i++) {
        cout << products[i].first << " "
             << products[i].second << endl;
    }

    cout << "\nTen san pham thu hai: "
         << products[1].first << endl;

    cout << "Gia san pham thu hai: "
         << products[1].second << endl;

    return 0;
}
