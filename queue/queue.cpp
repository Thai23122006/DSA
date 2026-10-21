
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int choice, x;

    do {
        cout << "\n===== QUEUE MENU =====\n";
        cout << "1. Push (Them phan tu)\n";
        cout << "2. Pop (Xoa phan tu dau)\n";
        cout << "3. Front (Xem phan tu dau)\n";
        cout << "4. Back (Xem phan tu cuoi)\n";
        cout << "5. Size (So phan tu)\n";
        cout << "6. Empty (Kiem tra rong)\n";
        cout << "7. In Queue\n";
        cout << "0. Exit\n";
        cout << "Lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nhap gia tri: ";
                cin >> x;
                q.push(x);
                cout << "Da them " << x << " vao Queue.\n";
                break;

            case 2:
                if (!q.empty()) {
                    cout << "Da xoa: " << q.front() << '\n';
                    q.pop();
                } else {
                    cout << "Queue dang rong!\n";
                }
                break;

            case 3:
                if (!q.empty()) {
                    cout << "Phan tu dau: " << q.front() << '\n';
                } else {
                    cout << "Queue dang rong!\n";
                }
                break;

            case 4:
                if (!q.empty()) {
                    cout << "Phan tu cuoi: " << q.back() << '\n';
                } else {
                    cout << "Queue dang rong!\n";
                }
                break;

            case 5:
                cout << "So phan tu: " << q.size() << '\n';
                break;

            case 6:
                if (q.empty()) {
                    cout << "Queue rong.\n";
                } else {
                    cout << "Queue khong rong.\n";
                }
                break;

            case 7: {
                if (q.empty()) {
                    cout << "Queue dang rong!\n";
                } else {
                    queue<int> temp = q;

                    cout << "Queue: ";
                    while (!temp.empty()) {
                        cout << temp.front() << " ";
                        temp.pop();
                    }
                    cout << '\n';
                }
                break;
            }

            case 0:
                cout << "Ket thuc chuong trinh.\n";
                break;

            default:
                cout << "Lua chon khong hop le!\n";
        }

    } while (choice != 0);

    return 0;
}
