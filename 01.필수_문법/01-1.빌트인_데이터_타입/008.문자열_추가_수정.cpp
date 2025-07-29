#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "APPLE";
    str += ", World!";          // 문자열 추가
    cout << str << endl;        // Apple, World!

    // 문자열 수정
    str[7] = 'P';
    cout << str << endl;        // Apple, Porld!

    str.replace(7, 4, "Col");   // 7번째 위치부터 4개의 문자열을 'Col'로 변경
    cout << str << endl;        // APPLE, Cold!

    return 0;
}

/* 
 * replace(시작위치, 삭제할문자수, 새로운문자열) 함수는 삭제와 삽입을 동시에 수행하기 때문에, 
 * 삭제된 부분 뒤의 모든 문자들이 앞으로 당겨오게 됩니다.
 * 10번째 문자 'l'은 삭제됨
 * 11번째 문자 'd'는 앞으로 당겨져서 새로운 10번째 위치로 이동
 * 12번째 문자 '!'도 11번째 위치로 이동
 */