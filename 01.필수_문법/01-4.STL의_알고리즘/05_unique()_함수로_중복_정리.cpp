#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// unique() 함수는 컨테이너 내 중복되는 원소들을 뒤로 밀어내고
// 중복되지 않은 원소들만 남겨 새로운 범위의 끝 반복자를 반환.

int main() {
    vector<int> v = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5};

    // unique 함수를 사용하여 중복 요소 제거
    auto newEnd = unique(v.begin(), v.end());

    // 중복되지 않는 요소들만 출력
    for (auto it = v.begin(); it != newEnd; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    // 1 2 3 4 5

    // 벡터의 크기 출력
    cout << v.size() << endl;  // 11

    // 전체 원소 출력 
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    // 1 2 3 4 5 3 4 4 5 5 5

    return 0;
}