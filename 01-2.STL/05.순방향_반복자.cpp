#include <algorithm>    // find 함수를 위한 헤더
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    // 순회하고 출력
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;   // 10 20 30 40 50
    

    // 탐색
    auto result = find(vec.begin(), vec.end(), 30);
    if (result != vec.end()) {
        cout << "Found: " << *result << endl;   
    } else {
        cout << "Not found" << endl;
    }   // Found: 30
    

    return 0;
}

/* 컨테이너의 find 함수 (algorithm)
 * - 반환값: iterator
 * - 못찾으면: end() iterator 반환
 */ 