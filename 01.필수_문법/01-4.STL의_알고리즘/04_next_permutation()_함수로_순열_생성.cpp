#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// next_permutation() 함수는 가능한 모든 순열을 생성
// 인수는 시작 반복자와 끝 반복자 2개를 받음
// 순열은 사전 순으로 생성하며 실제 범위 내 원소들의 위치 변경
// 가능한 순열이 있으면 true 반환, 더 이상 가능한 순열이 없으면 false 반환

int main() {
    vector<int> v = {1, 2, 3};
    // 모든 가능한 순열 출력
    do {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}

// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
