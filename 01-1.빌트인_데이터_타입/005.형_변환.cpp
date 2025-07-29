#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int i = 65;
    float f = 5.2f;

    // 암시적 형 변환(메모리가 큰 float로 변환됨)
    double d = i + f;
    cout << d << endl;          // 70.2

    // 명시적 형 변환 double -> int
    cout << static_cast<int>(d) << endl;            // 70
    cout << sizeof(static_cast<int>(d)) << endl;    // 4 (Byte)
    cout << typeid(d).name() << endl;               // double
    cout << d << endl;                              // 70.2

    // 명시적 형 변환 int -> char
    cout << static_cast<char>(i) << endl;   // 'A'

    return 0;
}