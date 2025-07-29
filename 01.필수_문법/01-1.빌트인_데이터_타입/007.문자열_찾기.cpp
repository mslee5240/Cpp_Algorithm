#include <iostream>
#include <string>

using namespace std;

int main() {
    // 문자열 초기화
    string str = "Hello, C++ World!";

    // "Hello" 문자열 찾기
    size_t pos1 = str.find("Hello");
    cout << pos1 << endl;   // 0

    // 'C' 문자 찾기
    size_t pos2 = str.find('C');
    cout << pos2 << endl;   // 7

    // "Hello" 문자열 찾기, 시작 인덱스 지정
    size_t start_index = 2;
    size_t pos3 = str.find("Hello", start_index);   // 탐색 시작 위치가 다름
    cout << pos3 << endl;   // 18446744073709551615 == string::npos 값

    // 존재하지 않는 문자열 찾기
    size_t pos4 = str.find("Python");
    cout << pos4 << endl;   // 18446744073709551615 == string::npos 값

    return 0;
}