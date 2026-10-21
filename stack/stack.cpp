
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    int choice;

    do {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push (them phan tu)\n";
        cout << "2. Top (xem dinh)\n";
        cout << "3. Pop (xoa dinh)\n";
        cout << "4. Size (dem phan tu)\n";
        cout << "5. Empty (kiem tra rong)\n";
        cout << "6. In va lay het phan tu\n";
        cout << "0. Thoat\n";
        cout << "Lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int x;
                cout << "Nhap so: ";
                cin >> x;

                st.push(x);
                cout << "Da them " << x << '\n';
                break;
            }

            case 2:
                if (!st.empty()) {
                    cout << "Dinh stack: "
                         << st.top() << '\n';
                } else {
                    cout << "Stack dang rong!\n";
                }
                break;

            case 3:
                if (!st.empty()) {
                    cout << "Da xoa: "
                         << st.top() << '\n';
                    st.pop();
                } else {
                    cout << "Stack dang rong!\n";
                }
                break;

            case 4:
                cout << "So phan tu: "
                     << st.size() << '\n';
                break;

            case 5:
                if (st.empty()) {
                    cout << "Stack rong\n";
                } else {
                    cout << "Stack khong rong\n";
                }
                break;

            case 6:
                if (st.empty()) {
                    cout << "Stack dang rong!\n";
                } else {
                    cout << "Cac phan tu tu dinh xuong day: ";

                    while (!st.empty()) {
                        cout << st.top() << ' ';
                        st.pop();
                    }

                    cout << "\nStack da bi lay het!\n";
                }
                break;

            case 0:
                cout << "Ket thuc chuong trinh.\n";
                break;

            default:
                cout << "Lua chon khong hop le!\n";
        }

    } while (choice != 0);

    return 0;
}
