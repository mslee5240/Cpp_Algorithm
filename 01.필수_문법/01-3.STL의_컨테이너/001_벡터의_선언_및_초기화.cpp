#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;  // <int>를 <char>, <double> 등으로 바꿔 사용할 수 있음
    vector<int> v2 = { 1, 2, 3, 4, 5 }; // 초기화 리스트 활용
    vector<int> v3(4, 3);               // 초기 벡터의 크기를 4로 하고, 모든 원소를 3으로 채움
    vector<int> v4(v3);                 // v3를 복사해서 독립된 새로운 벡터 생성

    // 벡터는 cout으로 직접 출력할 수 없음.
    // 반복문을 사용해서 각 원소를 하나씩 출력해야 함.
    cout << "v2: ";
    for (int x : v2) {
        cout << x << " ";
    }
    cout << endl;

    cout << "v3: ";
    for (int x : v3) {
        cout << x << " ";
    }
    cout << endl;

    cout << "v4: ";
    for (int x : v4) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

// 출력:
// v2: 1 2 3 4 5
// v3: 3 3 3 3
// v4: 3 3 3 3