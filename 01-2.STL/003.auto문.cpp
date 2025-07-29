#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main() {
    auto num = 42;          // int로 추론
    cout << num << endl;    // 42

    auto pi = 3.141592;     // double로 추론
    cout << pi << endl;     // 3.14159  / 기본 정밀도 제한 (유효숫자 6자리)
    cout << typeid(pi).name() << endl;  // double

    auto greeting = string("Hello, world!");  // string으로 추론
    cout << greeting << endl;                 // Hello, world!

    return 0;
}

/*
 * 기본 정밀도 제한
 * cout은 기본적으로 6자리 유효숫자로 부동소수점 수를 출력합니다:
 * 3.141592에서 유효숫자 6자리: 3, 1, 4, 1, 5, 9
 * 따라서 3.14159로 출력됩니다 (마지막 자리에서 반올림)
 */