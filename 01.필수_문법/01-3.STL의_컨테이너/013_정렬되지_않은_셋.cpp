#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> myUnorderedSet;

    // 삽입
    myUnorderedSet.insert(3);  // {3}
    myUnorderedSet.insert(1);  // {1, 3}
    myUnorderedSet.insert(4);  // {4, 1, 3}
    myUnorderedSet.insert(2);  // {2, 4, 1, 3}

    for (int num : myUnorderedSet) {
        cout << num << " ";
    }
    cout << endl;
    // 출력: 2 4 1 3

    return 0;
}