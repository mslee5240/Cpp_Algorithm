#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// 이진 탐색
// - 데이터가 이미 정렬되어 있고, 원소를 자주 탐색해야 한다면 순차 탐색하는 것보다 유용함.
// - 정렬되지 않은 상태에서 이진 탐색을 하려면 정렬 후 이진 탐색을 진행해야 하므로
// - 선형 탐색보다 더 많은 시간 복잡도를 필요로 함.

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // binary_search()는 탐색을 수행하고 원소가 있으면 true 없으면 false 반환
    cout << binary_search(v.begin(), v.end(), 3) << endl;   // 1
    cout << binary_search(v.begin(), v.end(), 7) << endl;   // 0

    return 0;
}