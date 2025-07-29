#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// max_element() 함수와 min_element() 함수는 컨테이너 내에서 최댓값, 최솟값의 위치를 반환
int main() {
    vector<int> v = {1, 3, 5, 7, 2, 4, 6};

    auto maxIt = max_element(v.begin(), v.end());
    auto minIt = min_element(v.begin(), v.end());

    cout << *maxIt << endl; // 7
    cout << *minIt << endl; // 1

    return 0;
}
