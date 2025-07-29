#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 4, 3, 4, 5, 4, 5};

    // 5라는 값이 벡터 v에 몇 번 나타나는지 세기
    int ret = count(v.begin(), v.end(), 5);

    cout << ret << endl;    // 2

    return 0;
}