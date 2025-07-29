#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 3, 2, 1, 5}; // => {1, 2, 3, 5}

    // 원소 4 삽입
    s.insert(4);    // => {1, 2, 3, 4, 5}

    // 원소 2 삭제
    s.erase(2);     // => {1, 3, 4, 5}

    // 원소 4가 있는지 확인 후 삭제
    auto it = s.find(4);
    if (it != s.end()) {
        s.erase(it);    // => {1, 3, 5}
    }

    return 0;
}

// erase() 메서드에 원소의 주소를 인수로 넘길 때 s의 원소 주소에 해당되지 않는 주소를 넘기면
// 프로그램이 정상적으로 동작하지 않습니다. 만약 end 반복자 위치를 삭제하려고 하면 예외가 발생합니다.