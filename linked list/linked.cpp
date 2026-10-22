
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void pushBack(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node{value, nullptr};

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void pushFront(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;

    if (tail == nullptr) {
        tail = newNode;
    }
}

void printList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << '\n';
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int n;
    cout << "Nhap so luong Node: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pushBack(head, tail, x);
    }

    cout << "Danh sach ban dau: ";
    printList(head);

    int x;
    cout << "Nhap gia tri them vao dau: ";
    cin >> x;
    pushFront(head, tail, x);

    cout << "Sau khi them dau: ";
    printList(head);

    cout << "Nhap gia tri them vao cuoi: ";
    cin >> x;
    pushBack(head, tail, x);

    cout << "Sau khi them cuoi: ";
    printList(head);

    // Giai phong bo nho
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;

    return 0;
}
