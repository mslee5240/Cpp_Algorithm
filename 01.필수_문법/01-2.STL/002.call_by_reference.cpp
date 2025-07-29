#include <iostream>

using namespace std;

void modify(int& value) {
    value = 10;
    cout << "주소: " << &value << endl;   // 주소: 00000045E14FF944
    cout << "값: " << value << endl;      // 값: 10
}

int main() {
    int value = 5;
    cout << "주소: " << &value << endl; // 주소: 00000045E14FF944
    cout << "값: " << value << endl;    // 값: 5
    modify(value);                      // modify() 함수 호출
    cout << "값: " << value << endl;    // 값: 10

    return 0;
}