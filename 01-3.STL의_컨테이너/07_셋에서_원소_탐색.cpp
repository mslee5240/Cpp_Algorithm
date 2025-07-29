#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers = {1, 2, 3, 4, 5};
    int targets[] = {3, 7}; // 원소가 3과 7인 배열

    for (int target : targets) {
        // set에서 원소를 탐색하는 방법
        auto it = numbers.find(target);

        if (it != numbers.end()) {
            cout << "원소 " << target << "를(을) 찾았습니다. 값: " << *it << endl;
        } else {
            cout << "원소 " << target << "를(을) 찾지 못했습니다." << endl;
        }
    }

    return 0;
}
// 출력:
// 원소 3를(을) 찾았습니다. 값: 3
// 원소 7를(을) 찾지 못했습니다.

// map/set의 find 함수
// - 반환값: iterator (key-value 쌍을 가리킴)
// - 못찾으면: end() iterator 반환