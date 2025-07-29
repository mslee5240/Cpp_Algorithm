#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;   // 출력: 50 40 30 20 10

    auto result = find(vec.rbegin(), vec.rend(), 30);
    if (result != vec.rend()) {
        cout << "Found: " << *result << endl;
    } else {
        cout << "Not found" << endl;
    }
    // 출력: 30

    return 0;
}