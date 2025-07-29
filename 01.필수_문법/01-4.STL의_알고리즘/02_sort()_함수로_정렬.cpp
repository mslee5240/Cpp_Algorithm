#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// sort(시작 반복자, 끝 반복자)
// 인수를 2개 받을 때는 시작 반복자와 끝 반복자를 받아 범위 내 원소들을 오름차순으로 정렬

int main() {
    vector<int> v = {4, 2, 5, 3, 1};

    // 벡터 v를 오름차순으로 정렬
    sort(v.begin(), v.end());
    // v: 1 2 3 4 5

    // 벡터 v를 내림차순으로 정렬
    sort(v.rbegin(), v.rend());
    // v: 5 4 3 2 1

    return 0;
}

