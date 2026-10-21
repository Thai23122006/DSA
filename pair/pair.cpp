
#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main() {
    // 1. Khai bao pair
    pair<int, string> student = {1, "Thai"};

    cout << "=== Thong tin ban dau ===" << endl;
    cout << "ID: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    // 2. Thay doi gia tri
    student.first = 2;
    student.second = "Duong";

    cout << "\n=== Sau khi thay doi ===" << endl;
    cout << "ID: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    // 3. Nhap pair tu ban phim
    pair<int, int> numbers;

    cout << "\nNhap hai so nguyen: ";
    cin >> numbers.first >> numbers.second;

    cout << "So thu nhat: " << numbers.first << endl;
    cout << "So thu hai: " << numbers.second << endl;
    cout << "Tong: "
         << numbers.first + numbers.second << endl;

    // 4. So sanh hai pair
    pair<int, int> a = {1, 10};
    pair<int, int> b = {1, 20};

    if (a < b) {
        cout << "\na nho hon b" << endl;
    } else {
        cout << "\na khong nho hon b" << endl;
    }

    return 0;
}
