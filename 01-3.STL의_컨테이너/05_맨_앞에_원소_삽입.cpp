#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {2, 3, 4, 5};

    // 맨 앞에 원소 삽입
    v.insert(v.begin(), 1); // {1, 2, 3, 4, 5}

    // 맨 앞에 원소 삭제
    v.erase(v.begin()); // {2, 3, 4 , 5}

    return 0;
}