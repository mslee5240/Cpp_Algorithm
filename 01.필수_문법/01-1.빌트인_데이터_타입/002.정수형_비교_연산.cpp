#include <iostream>

using namespace std;

int main() {
    int a = 13;
    int b = 4;

    // 비교 연산이 참이면 1을, 거짓이면 0을 반환
    cout << (a == b) << endl;   // 0
    cout << (a != b) << endl;   // 1
    cout << (a > b) << endl;    // 1
    cout << (a < b) << endl;    // 0
    cout << (a >= b) << endl;   // 1
    cout << (a <= b) << endl;   // 0

    return 0;
}