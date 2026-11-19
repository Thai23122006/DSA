#include <cstddef>
#include <iostream>

using namespace std;

// Truyền con trỏ vào hàm để hàm có thể thay đổi biến gốc
void incrementValue(int* pointer) {
    if (pointer != nullptr) {
        ++(*pointer); // lấy giá trị tại địa chỉ pointer rồi tăng lên 1
    }
}

void swapValues(int* first, int* second) {
    if (first == nullptr || second == nullptr) {
        return;
    }

    int temp = *first;
    *first = *second;
    *second = temp;
}

void printArray(const int* array, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        // array[i] tương đương *(array + i).
        cout << array[i] << ' ';
    }
    cout << '\n';
}

int main() {
    cout << "=== 1. Dia chi va gia tri ===\n";
    int age = 20;
    int* agePtr = &age; // & lấy địa chỉ của biến age

    cout << "tuoi = " << age << '\n';
    cout << "Dia chi cua tuoi = " << &age << '\n';
    cout << "agePtr dang luu dia chi = " << agePtr << '\n';
    cout << "Gia tri tai dia chi agePtr = " << *agePtr << '\n'; // * giải tham chiếu.

    *agePtr = 21; // sửa biến age thông qua con trỏ
    cout << "Sau khi *agePtr = 21, tuoi = " << age << "\n\n";

    cout << "=== 2. Con tro nullptr ===\n";
    int* nullPtr = nullptr; // con trỏ chưa trỏ tới đối tượng nào
    if (nullPtr == nullptr) {
        cout << "nullPtr chua tro den dia chi hop le.\n";
    }
    // Không được giải tham chiếu nullPtr khi nullPtr == nullptr.
    cout << '\n';

    cout << "=== 3. Truyen con tro vao ham ===\n";
    incrementValue(&age);
    cout << "Sau incrementValue, tuoi = " << age << '\n';

    int x = 5;
    int y = 9;
    swapValues(&x, &y);
    cout << "Sau swapValues: x = " << x << ", y = " << y << "\n\n";

    cout << "=== 4. Con tro va mang ===\n";
    int scores[] = {7, 8, 9, 10};
    const size_t count = sizeof(scores) / sizeof(scores[0]);
    int* scoresPtr = scores; // tên mảng trong biểu thức này trỏ tới phần tử đầu tiên

    cout << "Cac phan tu: ";
    printArray(scoresPtr, count);
    cout << "Phan tu dau tien = " << *scoresPtr << '\n';
    cout << "Phan tu thu hai = " << *(scoresPtr + 1) << '\n';
    *(scoresPtr + 1) = 80; // tương đương scores[1] = 80.
    cout << "Mang sau khi sua: ";
    printArray(scores, count);
    cout << '\n';

    cout << "=== 5. Con tro cap 2 ===\n";
    int* xPtr = &x;
    int** xPtrPtr = &xPtr; // xPtrPtr trỏ đến một con trỏ int*.
    cout << "x = " << x << '\n';
    cout << "*xPtr = " << *xPtr << '\n';
    cout << "**xPtrPtr = " << **xPtrPtr << "\n\n";

    cout << "=== 6. Con tro const ===\n";
    int valueA = 1;
    int valueB = 2;
    const int* pointerToConst = &valueA; // Không lấy giá trị con trỏ này, nhưng có thể trỏ sang nơi khác.
    pointerToConst = &valueB;
    cout << "Gia tri dang duoc pointerToConst tro den = " << *pointerToConst << '\n';

    int* const constPointer = &valueA; // địa chỉ constPointer không đổi, nhưng sửa được giá trị của nó.
    *constPointer = 3;
    cout << "valueA sau khi sua qua constPointer = " << valueA << "\n\n";

    cout << "=== 7. Cap phat bo nho dong ===\n";
    const size_t arraySize = 3;
    int* dynamicArray = new int[arraySize]{11, 22, 33}; // cập nhật mảng trên heap.
    cout << "Mang dong: ";
    printArray(dynamicArray, arraySize);
    delete[] dynamicArray; // mảng cấp phát bằng new[] phải được giải phóng bằng delete[].
    dynamicArray = nullptr; // tránh để lại con trỏ (đang trỏ tới vùng giải phóng).

    cout << "Da giai phong mang dong.\n";
    return 0;
}
