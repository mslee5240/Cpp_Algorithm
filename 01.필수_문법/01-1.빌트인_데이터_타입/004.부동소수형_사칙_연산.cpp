#include <iostream>

using namespace std;

int main() {
    double d = 2.5f;
    float f = 1.5f;

    cout << sizeof(d) << endl;      // 8 (Byte)
    cout << sizeof(f) << endl;      // 4 (Byte)
    cout << d << " " << f << endl;  // 2.5 1.5
    cout << d + f << endl;          // 4
    cout << d - f << endl;          // 1
    cout << d * f << endl;          // 3.75
    cout << d / f << endl;          // 1.66667

    cout << sizeof(d + f) << endl;  // 8 (Byte)

    return 0;
}