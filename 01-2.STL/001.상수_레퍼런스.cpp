#include <iostream>

using namespace std;

void modify(int value) {
    value = 10; // 새 공간의 value 변경
    cout << "주소: " << &value << endl;  // 주소: 0000000720CFFA20
    cout << "값: " << value << endl;     // 값: 10
    // 함수가 종료되면 modify() 함수의 value는 메모리에서 사라짐
}

int main() {
    int value = 5;
    cout << "주소: " << &value << endl; // 주소: 0000000720CFFA44
    cout << "값: " << value << endl;    // 값: 5
    modify(value);                      // 함수 호출
    cout << "값: " << value << endl;    // 값: 5 / main() 함수 value 값은 그대로

    return 0;
}