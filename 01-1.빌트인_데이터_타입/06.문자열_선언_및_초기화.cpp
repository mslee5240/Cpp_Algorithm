#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1;                    // 빈 문자열 선언
    string str2 = "Hello, World!";  // 문자열 직접 초기화
    string str3(str2);              // 문자열 복사
    string str4(str2, 0, 5);        // 문자열 부분 복사 초기화  / "Hello"
    string str5(10, '*');           // 반복된 문자로 문자열 초기화 / "**********"

    cout << str1 << endl;   // 
    cout << str2 << endl;   // Hello, World!
    cout << str3 << endl;   // Hello, World!
    cout << str4 << endl;   // Hello
    cout << str5 << endl;   // **********

    return 0;
}